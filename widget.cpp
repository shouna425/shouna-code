#include "widget.h"
#include "ui_widget.h"
#include "secondw.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_loginbtn_clicked()
{
    QString account = ui->Editaccount->text().trimmed();
    QString password = ui->Editpassword->text().trimmed();
    secondw *c=new secondw;
    if(account=="admin"&& password=="1234"){
        close();
        c->show();
    }
    else{
        ui->label_4warn->setText("Account or password error!");
}

}

void Widget::on_pushButton_2_clicked()
{
    close();
}

