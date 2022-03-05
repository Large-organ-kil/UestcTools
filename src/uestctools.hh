#pragma once

#include "webview.hh"
#include <QIcon>
#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui
{
class UestcTools;
}
QT_END_NAMESPACE

class UestcTools : public QWidget
{
    Q_OBJECT

  public:
    WebView *webWindow;
    UestcTools(QWidget *parent = nullptr);
    ~UestcTools();

    void init();

  private:
    Ui::UestcTools *ui;
};
