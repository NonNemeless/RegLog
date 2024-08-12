#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //Cкрывает по умолчанию все виджеты.
    ui->LE_Registration_Mail->hide();
    ui->LE_Registration_Password->hide();
    ui->LE_Registration_PhoneNumber->hide();
    ui->LE_Registration_Username->hide();
    ui->LE_Registration_info->hide();
    ui->PB_Registration_Registration->hide();
    ui->NoChangeText_Registration_Mail->hide();
    ui->NoChangeText_Registration_Password->hide();
    ui->NoChangeText_Registration_Username->hide();
    ui->NoChangeText_PhoneNumber->hide();
    ui->LE_Login_Info->hide();
    ui->LE_Login_Mail->hide();
    ui->LE_Login_Password->hide();
    ui->LE_Login_Username->hide();
    ui->PB_Login_Login->hide();
    ui->NoChangeText_Login_Username->hide();
    ui->NoChangeText_Login_Mail->hide();
    ui->NoChangeText_Login_Password->hide();

    QRegularExpression regExp("[0-9]*"); //В LineEdit PhoneNumber можно писать только цифры.
    QRegularExpressionValidator *validatorForPhoneNumber = new QRegularExpressionValidator(regExp, this);
    ui->LE_Registration_PhoneNumber->setValidator(validatorForPhoneNumber);
}

MainWindow::~MainWindow()
{
    delete ui;
}

QString generateSalt(int length = 16) //Создаёт salt.
{
    QByteArray salt(length, '\0');
    QRandomGenerator *rng = QRandomGenerator::global();
    for (int i = 0; i < length; ++i)
    {
        salt[i] = static_cast<char>(rng->bounded(256));
    }
    return salt.toHex();
}

QString hashPassword(const QString &password, const QString &salt) //При помощи salt усложняет password.
{
    QByteArray saltBytes = QByteArray::fromHex(salt.toUtf8());
    QByteArray saltedPassword = saltBytes + password.toUtf8();
    QByteArray hashedBytes = QCryptographicHash::hash(saltedPassword, QCryptographicHash::Sha256);
    return hashedBytes.toHex();
}

QString generateRandomString(int length) //Генерирует рандомный набор букв для username, password и mail. (для теста)
{
    const QString possibleCharacters("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789");
    QString randomString;
    for (int i = 0; i < length; ++i) {
        int index = QRandomGenerator::global()->bounded(possibleCharacters.length());
        QChar nextChar = possibleCharacters.at(index);
        randomString.append(nextChar);
    }
    return randomString;
}

QString generateRandomMail() //Использует генератор рандомных букв, добавляет к ним @gmail.com. (для теста)
{
    QString localPart = generateRandomString(8);
    return localPart + "@gmail.com";
}

QString generateRandomPhoneNumber() //Генерирует рандомные цифры для номера телефона. (для теста)
{
    QString phoneNumber;
    phoneNumber.append(QString::number(QRandomGenerator::global()->bounded(1, 10)));
    for (int i = 0; i < 10; ++i) {
        phoneNumber.append(QString::number(QRandomGenerator::global()->bounded(0, 10)));
    }
    return phoneNumber;
}

void generateAcuants(int numberOfRecords) //Функция для кнопки создания рандомных записей. (для теста)
{
    QSqlDatabase sqlitedb = QSqlDatabase::addDatabase("QSQLITE");
    sqlitedb.setDatabaseName("C:/Other/login_work/login.db");

    if (sqlitedb.open())
    {
        sqlitedb.transaction();
        QSqlQuery insertQuery(sqlitedb);
        insertQuery.prepare("INSERT INTO loginDetails (username, password, salt, mail, phonenumber) VALUES (:username, :password, :salt, :mail, :phonenumber)");

        for (int i = 0; i < numberOfRecords; ++i)
        {
            QString username = generateRandomString(8);
            QString password = generateRandomString(12);
            QString salt = generateSalt();
            QString hashedPassword = hashPassword(password, salt);
            QString email = generateRandomMail();
            QString phoneNumber = generateRandomPhoneNumber();

            insertQuery.bindValue(":username", username);
            insertQuery.bindValue(":password", hashedPassword);
            insertQuery.bindValue(":salt", salt);
            insertQuery.bindValue(":mail", email);
            insertQuery.bindValue(":phonenumber", phoneNumber);

            if (!insertQuery.exec())
            {
                qDebug() << "Ошибка записи" << insertQuery.lastError().text();
            }
        }
        sqlitedb.commit();
        qDebug() << numberOfRecords << "Запись готова и записана";
    }
    else
    {
        qDebug() << "Ошибка открытия базы данных" << sqlitedb.lastError().text();
    }

    sqlitedb.close();
}

void MainWindow::on_PB_Start_Test_clicked() //При нажатие создаёт 100000 рандомных записей. (для теста)
{
    generateAcuants(10);
}

void MainWindow::on_PB_Login_Login_clicked()//Вход.
{
    QSqlDatabase sqlitedb = QSqlDatabase::addDatabase("QSQLITE");
    sqlitedb.setDatabaseName("C:/Other/login_work/login.db");

    QString username = ui->LE_Login_Username->text();
    QString password = ui->LE_Login_Password->text();
    QString mail = ui->LE_Login_Mail->text();

    if (sqlitedb.open())
    {
        QSqlQuery query(sqlitedb);
        query.prepare("SELECT password, salt FROM loginDetails WHERE username = :username AND mail = :mail");
        query.bindValue(":username", username);
        query.bindValue(":mail", mail);

        if(query.exec())
        {
            if (query.next())
            {
                QString storedHash = query.value(0).toString();
                QString storedSalt = query.value(1).toString();
                QString hashedPassword = hashPassword(password, storedSalt);

                if (storedHash == hashedPassword)
                {
                    ui->LE_Login_Info->setText("Успешный вход");
                }
                else
                {
                    ui->LE_Login_Info->setText("Неверные данные");
                }
            }
            else
            {
                ui->LE_Login_Info->setText("Неверные данные");
            }
        }
        else
        {
            ui->LE_Login_Info->setText("Ошибка базы данных");
        }
    }
    else
    {
        ui->LE_Login_Info->setText("Ошибка подключения");
    }
    sqlitedb.close();
}


void MainWindow::on_PB_Registration_Registration_clicked()//Регистрация.
{
    QSqlDatabase sqlitedb = QSqlDatabase::addDatabase("QSQLITE");
    sqlitedb.setDatabaseName("C:/Other/login_work/login.db");

    QString username = ui->LE_Registration_Username->text();
    QString password = ui->LE_Registration_Password->text();
    QString mail = ui->LE_Registration_Mail->text();
    QString phonenumber = ui->LE_Registration_PhoneNumber->text();

    QString salt = generateSalt();
    QString hashedPassword = hashPassword(password, salt);

    if (username.isEmpty() || password.isEmpty() || mail.isEmpty() || phonenumber.isEmpty())
    {
        ui->LE_Registration_info->setText("Есть пустые поля");
        return;
    }
    if (sqlitedb.open())
    {
        QSqlQuery query(sqlitedb);

        query.prepare("SELECT * FROM loginDetails WHERE username = :username OR mail = :mail OR phonenumber = :phonenumber");
        query.bindValue(":username", username);
        query.bindValue(":mail", mail);
        query.bindValue(":phonenumber", phonenumber);

        if(query.exec())
        {
            if (query.next())
            {
                ui->LE_Registration_info->setText("Такой пользователь уже есть");
            }
            else
            {
                QSqlQuery insertQuery(sqlitedb);
                insertQuery.prepare("INSERT INTO loginDetails (username, password, salt, mail, phonenumber) VALUES (:username, :password, :salt, :mail, :phonenumber)");
                insertQuery.bindValue(":username", username);
                insertQuery.bindValue(":password", hashedPassword);
                insertQuery.bindValue(":salt", salt);
                insertQuery.bindValue(":mail", mail);
                insertQuery.bindValue(":phonenumber", phonenumber);

                if (insertQuery.exec())
                {
                    ui->LE_Registration_info->setText("Успешная регистрация");
                }
                else
                {
                    ui->LE_Registration_info->setText("Ошибка регистрации" + insertQuery.lastError().text());
                }
            }
        }
        else
        {
            ui->LE_Registration_info->setText("Ошибка базы данных" + query.lastError().text());
        }
    }
    else
    {
        ui->LE_Registration_info->setText("Ошибка подключения" + sqlitedb.lastError().text());
    }
    sqlitedb.close();
}

void MainWindow::hideWidgets(const QList<QWidget*>& widgets) //Функция для скрытия винджетов.
{
    for (QWidget* widget : widgets)
    {
        if (widget)
        {
            widget->setVisible(false);
        }
    }
}

void MainWindow::showWidgets(const QList<QWidget*>& widgets) //Функция для показа виджетов.
{
    for (QWidget* widget : widgets)
    {
        if (widget)
        {
            widget->setVisible(true);
        }
    }
}

void MainWindow::on_PB_Start_Login_clicked() //Включает кнопки логина и убирает кнопки регистрации.
{
    QList<QWidget*> widgetsToHide = {
        ui->LE_Registration_Mail,
        ui->LE_Registration_Password,
        ui->LE_Registration_PhoneNumber,
        ui->LE_Registration_Username,
        ui->LE_Registration_info,
        ui->PB_Registration_Registration,
        ui->NoChangeText_Registration_Mail,
        ui->NoChangeText_Registration_Password,
        ui->NoChangeText_Registration_Username,
        ui->NoChangeText_PhoneNumber
    };
    hideWidgets(widgetsToHide);

    QList<QWidget*> widgetsToShow = {
        ui->LE_Login_Info,
        ui->LE_Login_Mail,
        ui->LE_Login_Password,
        ui->LE_Login_Username,
        ui->PB_Login_Login,
        ui->NoChangeText_Login_Username,
        ui->NoChangeText_Login_Mail,
        ui->NoChangeText_Login_Password
    };
    showWidgets(widgetsToShow);

    ui->LE_Registration_Mail->clear();
    ui->LE_Registration_Password->clear();
    ui->LE_Registration_PhoneNumber->clear();
    ui->LE_Registration_Username->clear();
    ui->LE_Registration_info->clear();
}

void MainWindow::on_PB_Start_Registration_clicked() //Включает кнопки регистрации и убирает кнопки логина.
{
    QList<QWidget*> widgetsToHide = {
        ui->LE_Login_Info,
        ui->LE_Login_Mail,
        ui->LE_Login_Password,
        ui->LE_Login_Username,
        ui->PB_Login_Login,
        ui->NoChangeText_Login_Username,
        ui->NoChangeText_Login_Mail,
        ui->NoChangeText_Login_Password
    };
    hideWidgets(widgetsToHide);

    QList<QWidget*> widgetsToShow = {
        ui->LE_Registration_Mail,
        ui->LE_Registration_Password,
        ui->LE_Registration_PhoneNumber,
        ui->LE_Registration_Username,
        ui->LE_Registration_info,
        ui->PB_Registration_Registration,
        ui->NoChangeText_Registration_Mail,
        ui->NoChangeText_Registration_Password,
        ui->NoChangeText_Registration_Username,
        ui->NoChangeText_PhoneNumber
    };
    showWidgets(widgetsToShow);

    ui->LE_Login_Info->clear();
    ui->LE_Login_Mail->clear();
    ui->LE_Login_Password->clear();
    ui->LE_Login_Username->clear();
}
