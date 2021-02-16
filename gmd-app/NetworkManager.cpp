//
// Created by mua on ১৪/২/২১.
//

#include "NetworkManager.h"

NetworkManager::NetworkManager(QApplication* app) {
    manager = new QNetworkAccessManager(app);
}

void NetworkManager::Get(QString url) const {
    auto status = connect(manager, &QNetworkAccessManager::finished,
                          this, &NetworkManager::OnFinished);
    manager->get(QNetworkRequest(QUrl(url)));
}

void NetworkManager::OnFinished(QNetworkReply *reply) {
    qDebug() << reply->readAll();
    OnReceived();
}