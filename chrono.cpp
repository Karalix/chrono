#include "chrono.h"
#include "ui_chrono.h"
#include <QTimer>

Chrono::Chrono(QWidget *parent) :
    QWidget(parent),ui(new Ui::Chrono), ms(0), s(0), m(0), starti(false)
{
    ui->setupUi(this) ;
    timer = new QTimer() ;
    connect(this->ui->startStop, SIGNAL(clicked(bool)), this, SLOT(start(bool))) ;
    connect(this->ui->reset, SIGNAL(clicked()), this, SLOT(reset())) ;
    connect(this->timer, SIGNAL(timeout()), this, SLOT(inc())) ;
}

void Chrono::start(bool)
{
    if (starti == false){
         timer->start(10);
         starti = true ;
    }
    else {
        timer->stop() ;
        starti = false ;
    }
}

void Chrono::inc()
{
    ms++ ;
    if (ms > 99) {
        ms = 0 ;
        s++;
    }
    if (s >59){
        s = 0 ;
        m++ ;
    }
    if (m>59){
        m=0 ;
    }


    this->ui->affichageMs->display(ms) ;
    this->ui->affichageS->display(s) ;
    this->ui->affichageM->display(m) ;
}

void Chrono::reset()
{
    ms =s=m=0 ;
    this->ui->affichageMs->display(ms) ;
    this->ui->affichageS->display(s) ;
    this->ui->affichageM->display(m) ;
}
