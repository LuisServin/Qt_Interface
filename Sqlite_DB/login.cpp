#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);

    QSqlDatabase mydb = QSqlDatabase::addDatabaseName("QSQLITE");
    mydb.setDatabaseName("");
}

Login::~Login()
{
    delete ui;
}
