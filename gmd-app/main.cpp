#include <QApplication>
#include <QPushButton>
#include "Manager.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    QPushButton button("Hello world!", nullptr);
    button.resize(200, 100);
    button.show();

    Manager manager(&a);

    return QApplication::exec();
}