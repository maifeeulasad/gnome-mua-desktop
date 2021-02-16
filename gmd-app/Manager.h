//
// Created by mua on ১৬/২/২১.
//

#ifndef GMD_APP_MANAGER_H
#define GMD_APP_MANAGER_H

#include <QObject>
#include <QApplication>
#include "NetworkManager.h"
#include "DisplayManager.h"

class Manager : public QObject{
Q_OBJECT
public:
    explicit Manager(QApplication *application, NetworkManager networkManager, DisplayManager displayManager);
    DisplayManager displayManager;
    NetworkManager networkManager;
};


#endif //GMD_APP_MANAGER_H
