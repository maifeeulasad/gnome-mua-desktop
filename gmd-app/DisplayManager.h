//
// Created by mua on ১৬/২/২১.
//

#ifndef GMD_APP_DISPLAY_MANAGER_H
#define GMD_APP_DISPLAY_MANAGER_H

#include <QApplication>
#include <QObject>
#include <iostream>

class DisplayManager : public QObject{
Q_OBJECT
public:
    explicit DisplayManager(QApplication *app);
    void ChangeWallPaper();
public slots:
    void ReceiveData();
};


#endif //GMD_APP_DISPLAY_MANAGER_H
