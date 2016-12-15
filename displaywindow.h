#ifndef DISPLAYWINDOW_H
#define DISPLAYWINDOW_H
#include <QTabWidget>

class DisplayWindow : public QTabWidget
{
    QTabBar *postsTab;
    QTabBar *friendsTab;

public:
    DisplayWindow();
};

#endif // DISPLAYWINDOW_H
