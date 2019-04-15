#include "FindTextWidget.h"
#include "ui_FindTextWidget.h"

FindTextWidget::FindTextWidget(QWidget *parent) :
    QGroupBox(parent),
    ui(new Ui::FindTextWidget)
{
    ui->setupUi(this);
    connect(ui->close, SIGNAL(clicked()), this, SLOT(on_close()));
    connect(ui->next, SIGNAL(clicked()), this, SLOT(on_next()));
    connect(ui->prev, SIGNAL(clicked()), this, SLOT(on_prev()));
}

FindTextWidget::~FindTextWidget() {}

void FindTextWidget::start_find(QString &text)
{
    ui->findText->setText(text);
    show();
}

void FindTextWidget::on_next()
{
}

void FindTextWidget::on_prev()
{
}

void FindTextWidget::on_close()
{
    hide();
}
