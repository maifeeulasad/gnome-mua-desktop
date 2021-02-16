//
// Created by mua on ১৬/২/২১.
//

#ifndef GMD_APP_DISPLAY_MANAGER_H
#define GMD_APP_DISPLAY_MANAGER_H

#include <QApplication>
#include <QObject>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>
#include <QTimer>
#include <QProcess>
#include <iostream>
#include <cstdlib>

class DisplayManager : public QObject{
Q_OBJECT
public:
    explicit DisplayManager(QApplication *app);
    void ChangeWallPaper(QString filePath);
    QJsonArray wallpaperArray;
public slots:
    void ReceiveData(QJsonDocument jsonDocument);
    void ChangeWallpaper();
};


#endif //GMD_APP_DISPLAY_MANAGER_H
