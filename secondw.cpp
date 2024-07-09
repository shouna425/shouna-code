#include "secondw.h"
#include "ui_secondw.h"

secondw::secondw(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::secondw)
{
    ui->setupUi(this);
}

secondw::~secondw()
{
    delete ui;
}
