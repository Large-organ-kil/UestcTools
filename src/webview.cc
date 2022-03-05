#include "webview.hh"
#include "ui_webview.h"

WebView::WebView(QWidget *parent) : QWidget(parent), ui(new Ui::WebView)
{
    ui->setupUi(this);
    this->setWindowTitle("登录"); //设置标题
    ui->webEngineView->setUrl(QUrl("http://eams.uestc.edu.cn/eams/home!submenus.action?menu.id="));
}

WebView::~WebView()
{
    delete ui;
}
