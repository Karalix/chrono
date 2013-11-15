#ifndef CHRONO_H
#define CHRONO_H

#include <QWidget>
#include <QTimer>

namespace Ui {
    class Chrono ;

}

class Chrono : public QWidget
{
    Q_OBJECT
private :
    Ui::Chrono *ui;
    QTimer *timer ;
    int ms, s, m ;
    bool starti ;
public:
    explicit Chrono(QWidget *parent = 0);

signals:

public slots:
    void start(bool);
    void inc() ;
    void reset();

};

#endif // CHRONO_H
