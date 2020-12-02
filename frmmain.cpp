#include "frmmain.h"
#include "ui_frmmain.h"
#include <pulse/introspect.h>
#include <pulse/context.h>
#include <pulse/mainloop-api.h>
#include <pulse/mainloop.h>


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
/*
class stateService
{
public:
    stateService() {}
};
*/

void frmMain::on_actionAdd_New_Element_triggered()
{

}

void papuiCallback(pa_context *c, void *userdata)
{
    QString success = "Success";
}

void frmMain::on_btnReadSink_clicked()
{


    pa_mainloop *papuiLoop = pa_mainloop_new();
    pa_mainloop_api *papuiLoopApi = pa_mainloop_get_api(papuiLoop);

    pa_context *papuiContext = pa_context_new(papuiLoopApi, "papuiContext");
    pa_context_set_state_callback(papuiContext, papuiCallback, NULL);
    int valReturn = pa_context_connect(papuiContext, NULL, (pa_context_flags_t)0, NULL);
    ui->tbTestOutput->setText(QString::number(valReturn));

    /** QString sinks = pa_context_get_sink_info_list();
     *  ui->tbTestOutput->setText(sinks);
     */
}

void frmMain::on_btnClear_clicked()
{
    ui->label_4->clear();
}
