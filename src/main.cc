#include "uestctools.hh"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    UestcTools w;
    w.show();
    return a.exec();
}
