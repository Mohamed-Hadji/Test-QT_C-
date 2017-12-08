#ifndef TRIE_TXT_H
#define TRIE_TXT_H
#include "mainwindow.h"
#include <QGraphicsScene>
#include <QGraphicsView>


class Trie_txt : public QGraphicsView
{
public:
    Trie_txt();

    QString TronquerTexte(QString path,int value);

};

#endif // TRIE_TXT_H
