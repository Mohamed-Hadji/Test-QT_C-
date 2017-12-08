#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QApplication>

#include <QTextEdit>   // Nous allons tout de même afficher le contenu du fichier ^^

#include <QFile>       // Pour utiliser le fichier

#include <QString>     // Stocke le contenu du fichier

#include <QTextStream> // Flux sortant du fichier
#include <QMainWindow>
#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QFileDialog>
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    int value;

private slots:
    void on_pushButton_clicked();
    void on_spinBox_valueChanged(int arg1);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
