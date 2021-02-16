#include <QApplication>
#include <QPushButton>
#include "NetworkManager.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    QPushButton button("Hello world!", nullptr);
    button.resize(200, 100);
    button.show();


    QString url
            = "https://raw.githubusercontent.com/maifeeulasad/gnome-mua-desktop/data-source/data.json";
    NetworkManager worker(&a);
    worker.Get(url);

    return QApplication::exec();
}
