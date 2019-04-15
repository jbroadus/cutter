#ifndef FINDTEXTWIDGET_H
#define FINDTEXTWIDGET_H

#include <memory>

#include <QGroupBox>

namespace Ui {
class FindTextWidget;
}

class FindTextWidget : public QGroupBox
{
    Q_OBJECT

public:
    explicit FindTextWidget(QWidget *parent = nullptr);
    ~FindTextWidget();

    void start_find(QString &text);

private slots:
    void on_next();
    void on_prev();
    void on_close();

private:
    std::unique_ptr<Ui::FindTextWidget> ui;
};

#endif // FINDTEXTWIDGET_H
