/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *LE_Login_Username;
    QLineEdit *LE_Login_Password;
    QLabel *NoChangeText_Login_Password;
    QLabel *NoChangeText_Login_Username;
    QPushButton *PB_Login_Login;
    QLineEdit *LE_Login_Info;
    QLabel *NoChangeText_Login_Mail;
    QLineEdit *LE_Login_Mail;
    QLabel *NoChangeText_Registration_Username;
    QLabel *NoChangeText_Registration_Password;
    QLabel *NoChangeText_Registration_Mail;
    QLabel *NoChangeText_PhoneNumber;
    QLineEdit *LE_Registration_Username;
    QLineEdit *LE_Registration_Password;
    QLineEdit *LE_Registration_Mail;
    QLineEdit *LE_Registration_PhoneNumber;
    QPushButton *PB_Registration_Registration;
    QLineEdit *LE_Registration_info;
    QPushButton *PB_Start_Login;
    QPushButton *PB_Start_Registration;
    QPushButton *PB_Start_Test;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(330, 310);
        MainWindow->setMinimumSize(QSize(330, 310));
        MainWindow->setMaximumSize(QSize(330, 310));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        LE_Login_Username = new QLineEdit(centralwidget);
        LE_Login_Username->setObjectName("LE_Login_Username");
        LE_Login_Username->setEnabled(true);
        LE_Login_Username->setGeometry(QRect(77, 70, 130, 30));
        LE_Login_Username->setStyleSheet(QString::fromUtf8("QLineEdit \n"
"{\n"
"    color: white; \n"
"    border: 1px solid #2b2b2b; \n"
"    padding: 5px; \n"
"}\n"
"\n"
"QLineEdit:focus\n"
" {\n"
"    border: 1px solid #524e4e; \n"
"}\n"
"\n"
"QLineEdit::placeholder \n"
"{\n"
"    color: gray; \n"
"}\n"
""));
        LE_Login_Password = new QLineEdit(centralwidget);
        LE_Login_Password->setObjectName("LE_Login_Password");
        LE_Login_Password->setEnabled(true);
        LE_Login_Password->setGeometry(QRect(77, 110, 130, 30));
        LE_Login_Password->setStyleSheet(QString::fromUtf8("QLineEdit \n"
"{\n"
"    color: white; \n"
"    border: 1px solid #2b2b2b; \n"
"    padding: 5px; \n"
"}\n"
"\n"
"QLineEdit:focus\n"
" {\n"
"    border: 1px solid #524e4e; \n"
"}\n"
"\n"
"QLineEdit::placeholder \n"
"{\n"
"    color: gray; \n"
"}\n"
""));
        NoChangeText_Login_Password = new QLabel(centralwidget);
        NoChangeText_Login_Password->setObjectName("NoChangeText_Login_Password");
        NoChangeText_Login_Password->setEnabled(true);
        NoChangeText_Login_Password->setGeometry(QRect(20, 113, 50, 17));
        NoChangeText_Login_Password->setStyleSheet(QString::fromUtf8("font: 900 10pt \"Segoe UI\";"));
        NoChangeText_Login_Password->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        NoChangeText_Login_Username = new QLabel(centralwidget);
        NoChangeText_Login_Username->setObjectName("NoChangeText_Login_Username");
        NoChangeText_Login_Username->setEnabled(true);
        NoChangeText_Login_Username->setGeometry(QRect(10, 77, 61, 17));
        NoChangeText_Login_Username->setStyleSheet(QString::fromUtf8("font: 900 10pt \"Segoe UI\";"));
        NoChangeText_Login_Username->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        PB_Login_Login = new QPushButton(centralwidget);
        PB_Login_Login->setObjectName("PB_Login_Login");
        PB_Login_Login->setEnabled(true);
        PB_Login_Login->setGeometry(QRect(77, 190, 71, 31));
        PB_Login_Login->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"    color: white; \n"
"    background-color: #2d2d2d; \n"
"    border: 1px solid #333; \n"
"    padding: 5px 10px; \n"
"    font-size: 14px; \n"
"    border-radius: 0px; \n"
"}\n"
"\n"
"QPushButton:hover \n"
"{\n"
"    background-color: #333;\n"
"    border: 1px solid #555;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #555;\n"
"    border: 1px solid #777; \n"
"}\n"
"font: 700 9pt \"Segoe UI\";\n"
""));
        LE_Login_Info = new QLineEdit(centralwidget);
        LE_Login_Info->setObjectName("LE_Login_Info");
        LE_Login_Info->setEnabled(false);
        LE_Login_Info->setGeometry(QRect(77, 230, 130, 30));
        LE_Login_Info->setStyleSheet(QString::fromUtf8("QLineEdit \n"
"{\n"
"    color: white; \n"
"    border: 1px solid #2b2b2b; \n"
"    padding: 5px; \n"
"}\n"
"\n"
"QLineEdit:focus\n"
" {\n"
"    border: 1px solid #524e4e; \n"
"}\n"
"\n"
"QLineEdit::placeholder \n"
"{\n"
"    color: gray; \n"
"}\n"
""));
        NoChangeText_Login_Mail = new QLabel(centralwidget);
        NoChangeText_Login_Mail->setObjectName("NoChangeText_Login_Mail");
        NoChangeText_Login_Mail->setEnabled(true);
        NoChangeText_Login_Mail->setGeometry(QRect(30, 152, 39, 17));
        NoChangeText_Login_Mail->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        NoChangeText_Login_Mail->setStyleSheet(QString::fromUtf8("font: 900 10pt \"Segoe UI\";"));
        NoChangeText_Login_Mail->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        LE_Login_Mail = new QLineEdit(centralwidget);
        LE_Login_Mail->setObjectName("LE_Login_Mail");
        LE_Login_Mail->setEnabled(true);
        LE_Login_Mail->setGeometry(QRect(77, 150, 200, 30));
        LE_Login_Mail->setStyleSheet(QString::fromUtf8("QLineEdit \n"
"{\n"
"    color: white; \n"
"    border: 1px solid #2b2b2b; \n"
"    padding: 5px; \n"
"}\n"
"\n"
"QLineEdit:focus\n"
" {\n"
"    border: 1px solid #524e4e; \n"
"}\n"
"\n"
"QLineEdit::placeholder \n"
"{\n"
"    color: gray; \n"
"}\n"
""));
        NoChangeText_Registration_Username = new QLabel(centralwidget);
        NoChangeText_Registration_Username->setObjectName("NoChangeText_Registration_Username");
        NoChangeText_Registration_Username->setEnabled(true);
        NoChangeText_Registration_Username->setGeometry(QRect(10, 77, 61, 17));
        NoChangeText_Registration_Username->setStyleSheet(QString::fromUtf8("font: 900 10pt \"Segoe UI\";"));
        NoChangeText_Registration_Username->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        NoChangeText_Registration_Password = new QLabel(centralwidget);
        NoChangeText_Registration_Password->setObjectName("NoChangeText_Registration_Password");
        NoChangeText_Registration_Password->setEnabled(true);
        NoChangeText_Registration_Password->setGeometry(QRect(20, 113, 50, 17));
        NoChangeText_Registration_Password->setStyleSheet(QString::fromUtf8("font: 900 10pt \"Segoe UI\";"));
        NoChangeText_Registration_Password->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        NoChangeText_Registration_Mail = new QLabel(centralwidget);
        NoChangeText_Registration_Mail->setObjectName("NoChangeText_Registration_Mail");
        NoChangeText_Registration_Mail->setEnabled(true);
        NoChangeText_Registration_Mail->setGeometry(QRect(30, 152, 39, 17));
        NoChangeText_Registration_Mail->setStyleSheet(QString::fromUtf8("font: 900 10pt \"Segoe UI\";"));
        NoChangeText_Registration_Mail->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        NoChangeText_PhoneNumber = new QLabel(centralwidget);
        NoChangeText_PhoneNumber->setObjectName("NoChangeText_PhoneNumber");
        NoChangeText_PhoneNumber->setEnabled(true);
        NoChangeText_PhoneNumber->setGeometry(QRect(22, 194, 51, 16));
        NoChangeText_PhoneNumber->setStyleSheet(QString::fromUtf8("font: 900 10pt \"Segoe UI\";"));
        NoChangeText_PhoneNumber->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        LE_Registration_Username = new QLineEdit(centralwidget);
        LE_Registration_Username->setObjectName("LE_Registration_Username");
        LE_Registration_Username->setEnabled(true);
        LE_Registration_Username->setGeometry(QRect(77, 70, 130, 30));
        LE_Registration_Username->setStyleSheet(QString::fromUtf8("QLineEdit \n"
"{\n"
"    color: white; \n"
"    border: 1px solid #2b2b2b; \n"
"    padding: 5px; \n"
"}\n"
"\n"
"QLineEdit:focus\n"
" {\n"
"    border: 1px solid #524e4e; \n"
"}\n"
"\n"
"QLineEdit::placeholder \n"
"{\n"
"    color: gray; \n"
"}\n"
""));
        LE_Registration_Password = new QLineEdit(centralwidget);
        LE_Registration_Password->setObjectName("LE_Registration_Password");
        LE_Registration_Password->setEnabled(true);
        LE_Registration_Password->setGeometry(QRect(77, 110, 130, 30));
        LE_Registration_Password->setStyleSheet(QString::fromUtf8("QLineEdit \n"
"{\n"
"    color: white; \n"
"    border: 1px solid #2b2b2b; \n"
"    padding: 5px; \n"
"}\n"
"\n"
"QLineEdit:focus\n"
" {\n"
"    border: 1px solid #524e4e; \n"
"}\n"
"\n"
"QLineEdit::placeholder \n"
"{\n"
"    color: gray; \n"
"}\n"
""));
        LE_Registration_Mail = new QLineEdit(centralwidget);
        LE_Registration_Mail->setObjectName("LE_Registration_Mail");
        LE_Registration_Mail->setEnabled(true);
        LE_Registration_Mail->setGeometry(QRect(77, 150, 200, 30));
        LE_Registration_Mail->setStyleSheet(QString::fromUtf8("QLineEdit \n"
"{\n"
"    color: white; \n"
"    border: 1px solid #2b2b2b; \n"
"    padding: 5px; \n"
"}\n"
"\n"
"QLineEdit:focus\n"
" {\n"
"    border: 1px solid #524e4e; \n"
"}\n"
"\n"
"QLineEdit::placeholder \n"
"{\n"
"    color: gray; \n"
"}\n"
""));
        LE_Registration_PhoneNumber = new QLineEdit(centralwidget);
        LE_Registration_PhoneNumber->setObjectName("LE_Registration_PhoneNumber");
        LE_Registration_PhoneNumber->setEnabled(true);
        LE_Registration_PhoneNumber->setGeometry(QRect(77, 190, 130, 30));
        LE_Registration_PhoneNumber->setStyleSheet(QString::fromUtf8("QLineEdit \n"
"{\n"
"    color: white; \n"
"    border: 1px solid #2b2b2b; \n"
"    padding: 5px; \n"
"}\n"
"\n"
"QLineEdit:focus\n"
" {\n"
"    border: 1px solid #524e4e; \n"
"}\n"
"\n"
"QLineEdit::placeholder \n"
"{\n"
"    color: gray; \n"
"}\n"
""));
        PB_Registration_Registration = new QPushButton(centralwidget);
        PB_Registration_Registration->setObjectName("PB_Registration_Registration");
        PB_Registration_Registration->setEnabled(true);
        PB_Registration_Registration->setGeometry(QRect(77, 230, 101, 31));
        PB_Registration_Registration->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    color: white; \n"
"    background-color: #2d2d2d; \n"
"    border: 1px solid #333; \n"
"    padding: 5px 10px; \n"
"    font-size: 14px; \n"
"    border-radius: 0px; \n"
"}\n"
"\n"
"QPushButton:hover \n"
"{\n"
"    background-color: #333; \n"
"    border: 1px solid #555; \n"
"}\n"
"\n"
"QPushButton:pressed \n"
"{\n"
"    background-color: #555; \n"
"    border: 1px solid #777; \n"
"}\n"
"font: 700 9pt \"Segoe UI\";\n"
""));
        LE_Registration_info = new QLineEdit(centralwidget);
        LE_Registration_info->setObjectName("LE_Registration_info");
        LE_Registration_info->setEnabled(false);
        LE_Registration_info->setGeometry(QRect(77, 270, 200, 30));
        LE_Registration_info->setStyleSheet(QString::fromUtf8("QLineEdit \n"
"{\n"
"    color: white; \n"
"    border: 1px solid #2b2b2b; \n"
"    padding: 5px; \n"
"}\n"
"\n"
"QLineEdit:focus\n"
" {\n"
"    border: 1px solid #524e4e; \n"
"}\n"
"\n"
"QLineEdit::placeholder \n"
"{\n"
"    color: gray; \n"
"}\n"
"\n"
""));
        PB_Start_Login = new QPushButton(centralwidget);
        PB_Start_Login->setObjectName("PB_Start_Login");
        PB_Start_Login->setGeometry(QRect(10, 10, 151, 51));
        PB_Start_Login->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"    color: white; \n"
"    background-color: #2d2d2d;\n"
"    border: 1px solid #333; \n"
"    padding: 5px 10px;\n"
"    font-size: 14px; \n"
"    border-radius: 0px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color: #333; \n"
"    border: 1px solid #555; \n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: #555; \n"
"    border: 1px solid #777; \n"
"}"));
        PB_Start_Registration = new QPushButton(centralwidget);
        PB_Start_Registration->setObjectName("PB_Start_Registration");
        PB_Start_Registration->setGeometry(QRect(170, 10, 151, 51));
        PB_Start_Registration->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"    color: white;\n"
"    background-color: #2d2d2d; \n"
"    border: 1px solid #333; \n"
"    padding: 5px 10px; \n"
"    font-size: 14px; \n"
"    border-radius: 0px; \n"
"}\n"
"\n"
"QPushButton:hover \n"
"{\n"
"    background-color: #333; \n"
"    border: 1px solid #555; \n"
"}\n"
"\n"
"QPushButton:pressed \n"
"{\n"
"    background-color: #555; \n"
"    border: 1px solid #777; \n"
"}"));
        PB_Start_Test = new QPushButton(centralwidget);
        PB_Start_Test->setObjectName("PB_Start_Test");
        PB_Start_Test->setGeometry(QRect(240, 70, 81, 31));
        PB_Start_Test->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"    color: white; \n"
"    background-color: #2d2d2d;\n"
"    border: 1px solid #333; \n"
"    padding: 5px 10px; \n"
"    font-size: 14px; \n"
"    border-radius: 0px; \n"
"}\n"
"\n"
"QPushButton:hover \n"
"{\n"
"    background-color: #333; \n"
"    border: 1px solid #555; \n"
"}\n"
"\n"
"QPushButton:pressed \n"
"{\n"
"    background-color: #555; \n"
"    border: 1px solid #777; \n"
"}"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "LogRegApp", nullptr));
        LE_Login_Username->setText(QString());
        NoChangeText_Login_Password->setText(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        NoChangeText_Login_Username->setText(QCoreApplication::translate("MainWindow", "\320\230\320\274\321\217", nullptr));
        PB_Login_Login->setText(QCoreApplication::translate("MainWindow", "\320\222\321\205\320\276\320\264", nullptr));
        NoChangeText_Login_Mail->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\321\207\321\202\320\260", nullptr));
        NoChangeText_Registration_Username->setText(QCoreApplication::translate("MainWindow", "\320\230\320\274\321\217", nullptr));
        NoChangeText_Registration_Password->setText(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        NoChangeText_Registration_Mail->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\321\207\321\202\320\260", nullptr));
        NoChangeText_PhoneNumber->setText(QCoreApplication::translate("MainWindow", "\320\235\320\276\320\274\320\265\321\200 ", nullptr));
        PB_Registration_Registration->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
        PB_Start_Login->setText(QCoreApplication::translate("MainWindow", "\320\222\320\276\320\271\321\202\320\270", nullptr));
        PB_Start_Registration->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214\321\201\321\217", nullptr));
        PB_Start_Test->setText(QCoreApplication::translate("MainWindow", "\320\242\320\265\321\201\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
