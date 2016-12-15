#include "displaywindow.h"
#include <QTabBar>

DisplayWindow::DisplayWindow()
{
    postsTab = new QTabBar(this);
    friendsTab = new QTabBar(this);

    this->setTabPosition(QTabWidget::West);
    this->addTab(postsTab,QStringLiteral(""));
    this->setTabIcon(0,QIcon(":/icons/posts.png"));
    this->addTab(friendsTab,QStringLiteral(""));
    this->setTabIcon(1,QIcon(":/icons/friends.png"));

    this->setIconSize(QSize(60,50));
    this->setWindowTitle("Social DashBoard");
    this->show();

}
