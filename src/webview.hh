#pragma once

#include <QWidget>

namespace Ui {
class WebView;
}

class WebView : public QWidget
{
    Q_OBJECT

public:
    explicit WebView(QWidget *parent = nullptr);
    ~WebView();

private:
    Ui::WebView *ui;
};

