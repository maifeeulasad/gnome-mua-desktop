//
// Created by mua on ১৬/২/২১.
//

#include "DisplayManager.h"

DisplayManager::DisplayManager(QApplication* app) {

}

void DisplayManager::ReceiveData(QJsonDocument jsonDocument) {
    wallpaperArray = jsonDocument.array();
    QJsonObject jsonObject = wallpaperArray.at(0).toObject();
    ChangeWallPaper(jsonObject.value("url").toString());
}

void DisplayManager::ChangeWallPaper(QString filePath) {
    QString command = "gsettings set org.gnome.desktop.background picture-uri " + filePath;
    QProcess::execute(command);
}
