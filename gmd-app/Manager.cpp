//
// Created by mua on ১৬/২/২১.
//

#include "Manager.h"

Manager::Manager(QApplication *application,
                 NetworkManager _networkManager,
                 DisplayManager _displayManager)
        : networkManager(application)
        , displayManager(application)
{
    QString url = "https://raw.githubusercontent.com/maifeeulasad/gnome-mua-desktop/data-source/data.json";
    networkManager.Get(url);

    connect(&networkManager, &NetworkManager::OnReceived,
            &displayManager, &DisplayManager::ReceiveData);
}

Manager::Manager(QApplication *application)
        : Manager(application,NetworkManager(application),DisplayManager(application)) {

}
