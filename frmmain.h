#ifndef FRMMAIN_H
#define FRMMAIN_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class frmMain; }
QT_END_NAMESPACE

class frmMain : public QMainWindow
{
    Q_OBJECT

public:
    frmMain(QWidget *parent = nullptr);
    ~frmMain();

private slots:
    void on_actionAdd_New_Element_triggered();

    void on_btnReadSink_clicked();

    void on_btnClear_clicked();

private:
    Ui::frmMain *ui;
};
#endif // FRMMAIN_H
