//
// Created by mua on ১৪/২/২১.
//

#ifndef GMD_APP_NETWORK_MANAGER_H
#define GMD_APP_NETWORK_MANAGER_H


#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkReply>
#include <QApplication>
#include <iostream>

class NetworkManager : public QObject {
Q_OBJECT
public:
    explicit NetworkManager(QApplication* application);
    void Get(QString url) const;
    void OnFinished(QNetworkReply *reply);

    QNetworkAccessManager *manager;
signals:
    void OnReceived();
};

#endif //GMD_APP_NETWORK_MANAGER_H
