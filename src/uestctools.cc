#include "uestctools.hh"
#include "ui_uestctools.h"
#include "webview.hh"

UestcTools::UestcTools(QWidget *parent) : QWidget(parent), ui(new Ui::UestcTools)
{
    ui->setupUi(this);
    init();
}

UestcTools::~UestcTools()
{
    delete ui;
}

void UestcTools::init()
{
    this->setWindowTitle("UestcTools");               //设置标题
    this->setWindowIcon(QIcon(":/img/img/icon.svg")); //设置图标
    webWindow = new WebView();
    connect(ui->getInfoBtn, &QPushButton::clicked, webWindow, &WebView::show);
}
