//
// Created by mua on ১৬/২/২১.
//

#include "Manager.h"

Manager::Manager(QApplication *application, NetworkManager networkManager, DisplayManager displayManager)
: networkManager(application),displayManager(application) {
    QString url = "https://raw.githubusercontent.com/maifeeulasad/gnome-mua-desktop/data-source/data.json";

    networkManager.Get(url);
    connect(&networkManager, &NetworkManager::OnReceived, &displayManager, &DisplayManager::ReceiveData);
}