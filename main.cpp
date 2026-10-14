#include "numtransdlg.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    numtransdlg w;
    w.setWindowTitle("數字轉換器");
    w.show();
    return QApplication::exec();
}
