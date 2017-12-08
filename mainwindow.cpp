#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "txt_tri.h"
#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QFileDialog>
#include <QMessageBox>
#include <QPixmap>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("/home/mohamed/Téléchargements/logo.png");
    ui->label_2->setPixmap(pix);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()

{
    Trie_txt *trie = new Trie_txt();
    QTextEdit *VueTexte = new QTextEdit();
    QString Texte;

    QString NomDeFichierEtPath = QFileDialog::getOpenFileName(
                this,
                tr("choisissez votre fichier"),
                "/home",
                "Text File(*.txt)");

    if(value==0 || value>45)
    {
        QMessageBox::critical(this,"Erreur","vous devez choisir un nombre entre 0 et 45");
    }
    else
    {
        this->hide();

        Texte=trie->TronquerTexte(NomDeFichierEtPath,value);
        VueTexte->setGeometry(100,100,400,200);
        VueTexte->setText(Texte);
        VueTexte->show();

    }



}

void MainWindow::on_spinBox_valueChanged(int arg1)
{
    value = arg1;

}
