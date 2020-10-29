#include "frmmain.h"
#include "ui_frmmain.h"
#include <iostream>
#include <QProcess>

frmMain::frmMain(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::frmMain)
{
    ui->setupUi(this);
}

frmMain::~frmMain()
{
    delete ui;
}


void frmMain::on_actionAdd_New_Element_triggered()
{

}

void frmMain::on_btnClear_clicked()
{
    ui->tbTestOutput->clear();
}

void frmMain::on_btnReadSink_clicked()
{

    //Use Process to get all available Sinks

    QString output;
    QProcess process;
    process.start("pactl list sinks");
    process.waitForFinished();
    output = process.readAllStandardOutput();

    //TMP: Show Output in TextBrowser (dbg reason)
    ui->tbTestOutput->setText(output);
    QString err=process.readAllStandardError();
    ui->tbErrorBox->setText(err);

    //creating Object from standart input stream
    QObject objSinks;



}

void frmMain::on_btnReadSink_2_clicked()
{
    QString output;
    QProcess process;
    process.start("pactl list sources");
    process.waitForFinished();
    output = process.readAllStandardOutput();
    ui->tbTestOutput->setText(output);
    QString err=process.readAllStandardError();
    ui->tbErrorBox->setText(err);
}

