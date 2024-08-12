#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QSqlDatabase>
#include <QRegularExpression>
#include <QRegularExpressionValidator>
#include <QCryptographicHash>
#include <QByteArray>
#include <QRandomGenerator>
#include <QString>
#include <QSqlQuery>
#include <QSqlError>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_PB_Login_Login_clicked();
    void on_PB_Registration_Registration_clicked();
    void on_PB_Start_Login_clicked();
    void on_PB_Start_Registration_clicked();
    void on_PB_Start_Test_clicked();

private:
    Ui::MainWindow *ui;
    void hideWidgets(const QList<QWidget*>& widgets);
    void showWidgets(const QList<QWidget*>& widgets);
};
#endif // MAINWINDOW_H
