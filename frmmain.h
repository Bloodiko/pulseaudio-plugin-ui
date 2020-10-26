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

private:
    Ui::frmMain *ui;
};
#endif // FRMMAIN_H
