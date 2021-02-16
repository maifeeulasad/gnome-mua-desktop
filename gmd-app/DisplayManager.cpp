//
// Created by mua on ১৬/২/২১.
//

#include "DisplayManager.h"

DisplayManager::DisplayManager(QApplication* app) {

}

void DisplayManager::ReceiveData(QJsonDocument jsonDocument) {
    wallpaperArray = jsonDocument.array();


    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(ChangeWallpaper()));
    timer->start(15*60*1000); // 15 minutes
}

void DisplayManager::ChangeWallpaper() {
    int rangeMax = wallpaperArray.count();
    int randomIndex = rand()%rangeMax;
    QJsonObject jsonObject = wallpaperArray.at(randomIndex).toObject();

    ChangeWallPaper(jsonObject.value("url").toString());
}

void DisplayManager::ChangeWallPaper(QString filePath) {
    QString command = "gsettings set org.gnome.desktop.background picture-uri " + filePath;
    QProcess::execute(command);
}