#include "calaix.h"
#include "ui_calaix.h"
#include "calculadora.h"
#include "ui_calculadora.h"
#include "calendari.h"
#include "ui_calendari.h"
#include "cronometre.h"
#include <QProcess>
#include <QPixmap>


calaix::calaix(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::calaix)
{
    ui->setupUi(this);
    calculadoraa = new calculadora(this);
    calculadoraa->close();
    calendari = new Calendari(this);
    calendari->close();
    cronometre = new Cronometre(this);
    cronometre->close();
    imatges();

}



calaix::~calaix()
{
    delete ui;
}



void calaix::on_calculadora_clicked()
{
    calculadoraa->show();

}

void calaix::on_p_3_clicked()
{
    calendari->show();
}

void calaix::on_p_7_clicked()
{
    QProcess *proc = new QProcess(this);
    proc->start("rc_gui");
}

void calaix::on_pb_rdigital_clicked()
{
    close();
}



void calaix::on_p_6_clicked()
{
    QProcess *proc = new QProcess(this);
    proc->start("chromium-browser");
}

void calaix::on_p_4_clicked() {  //Facebook
    QProcess *proc = new QProcess(this);
    proc->start("chromium-browser facebook.com");
}

void calaix::on_p_5_clicked() //YT
{
    QProcess *proc = new QProcess(this);
    proc->start("chromium-browser youtube.com");
}

void calaix::on_p_8_clicked() //Twitter
{
    QProcess *proc = new QProcess(this);
    proc->start("chromium-browser twitter.com");
}

void calaix::on_p_9_clicked()
{
    exit(1);
}

void calaix::on_cronometre_clicked()
{
    cronometre->show();
}

void calaix::imatges() {
    QPixmap chrome("/home/pi/prova20/imatges/chrome.jpg");
    QIcon b_chrome(chrome);
    ui->p_6->setIcon(b_chrome);
    ui->p_6->setIconSize(QSize(91,91));

    QPixmap calendari("/home/pi/prova20/imatges/calendari.jpg");
    QIcon b_calendari(calendari);
    ui->p_3->setIcon(b_calendari);
    ui->p_3->setIconSize(QSize(91,91));

    QPixmap face("/home/pi/prova20/imatges/facebook_blanc.jpg");
    QIcon b_face(face);
    ui->p_4->setIcon(b_face);
    ui->p_4->setIconSize(QSize(91,91));

    QPixmap YT("/home/pi/prova20/imatges/youtube_blanc.jpg");
    QIcon b_YT(YT);
    ui->p_5->setIcon(b_YT);
    ui->p_5->setIconSize(QSize(91,91));

    QPixmap sett("/home/pi/prova20/imatges/settings_blanc.jpg");
    QIcon b_sett(sett);
    ui->p_7->setIcon(b_sett);
    ui->p_7->setIconSize(QSize(91,91));

    QPixmap twitt("/home/pi/prova20/imatges/twitter_blanc.jpg");
    QIcon b_twitt(twitt);
    ui->p_8->setIcon(b_twitt);
    ui->p_8->setIconSize(QSize(91,91));

    QPixmap rpi("/home/pi/prova20/imatges/raspbian_blanc.jpg");
    QIcon b_rpi(rpi);
    ui->p_9->setIcon(b_rpi);
    ui->p_9->setIconSize(QSize(91,91));

    QPixmap calc("/home/pi/prova20/imatges/calculadora_blanc.jpg");
    QIcon b_calc(calc);
    ui->calculadora->setIcon(b_calc);
    ui->calculadora->setIconSize(QSize(91,91));

    QPixmap crono("/home/pi/prova20/imatges/cronometre.png");
    QIcon b_crono(crono);
    ui->cronometre->setIcon(b_crono);
    ui->cronometre->setIconSize(QSize(91,91));

    QPixmap dreta("/home/pi/prova20/imatges/dretabo.jpg");
    QIcon b_dreta(dreta);
    ui->pb_rdigital->setIcon(b_dreta);
    ui->pb_rdigital->setIconSize(QSize(75,480));
}
