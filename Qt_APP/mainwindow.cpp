#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "secdialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->horizontalSlider, SIGNAL(valueChanged(int)),
            ui->progressBar, SLOT(setValue(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->label->setText("<html><b><u>T</u>wo</b><br>lines</br></html>");
}

void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::information(this, tr("THE TITLE"),
                             tr("This is a message"));
}

void MainWindow::on_pushButton_3_clicked()
{
    // modal approach for only work in the
    // current active window.
    // SecDialog secdialog;
    // secdialog.setModal(true);
    // secdialog.exec();

    secdialog = new SecDialog(this);
    secdialog->show();
}
