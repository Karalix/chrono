#include <QApplication>
#include <chrono.h>

int main (int argc, char **argv) {
    QApplication app(argc, argv);
    Chrono chr;
    chr.show();
    app.exec() ;

}
