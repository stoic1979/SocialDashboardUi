#include <QApplication>
#include "displaywindow.h"

int main(int argc, char *argv[])
{
        QApplication a(argc, argv);
        DisplayWindow *window = new DisplayWindow();

        return a.exec();
}

