//
// Created by mua on ১৬/২/২১.
//

#include "DisplayManager.h"

DisplayManager::DisplayManager(QApplication* app) {

}

void DisplayManager::ChangeWallPaper() {

}

void DisplayManager::ReceiveData(QJsonDocument jsonDocument) {
    wallpaperArray = jsonDocument.array();
}