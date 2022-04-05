#include "convertisseurtempv2.h"
#include "ui_convertisseurtempv2.h"

ConvertisseurTempV2::ConvertisseurTempV2(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ConvertisseurTempV2)
{
    ui->setupUi(this);
}

ConvertisseurTempV2::~ConvertisseurTempV2()
{
    delete ui;
}

