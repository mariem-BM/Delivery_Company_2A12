#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include<mainwindow.h>
#include<liv.h>
#include<ressourcehumaine.h>
namespace Ui {
class login;
}

class login : public QDialog
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();

private slots:
    void on_pushButton_clicked();

private:
    Ui::login *ui;
    MainWindow *mainwindow;
    liv *l;
    ressourceHumaine *rh;
};

#endif // LOGIN_H
