#include "txt_tri.h"
#include <QGraphicsScene>
#include <QMessageBox>



Trie_txt::Trie_txt()
{


}

QString Trie_txt::TronquerTexte(QString PathToFile,int value)
{

    QFile input(PathToFile);
    int MaxCarectaire = value;
    int nbr;
    char s = '\n' ;
    QString Texte;


    if (input.open(QIODevice::ReadOnly| QIODevice::Text))
    {
       QTextStream in(&input);
       while (!in.atEnd())
       {
          QString line = in.readLine();
          nbr=int(line.size()/MaxCarectaire);
          int mod = line.size()%MaxCarectaire ;
          if(nbr==0)
          {
            Texte=Texte+line+s;
          }
          else
          {
              if (mod !=0)
              {
              for(int j=1;j<=nbr;j++)
              {
                  line.insert(MaxCarectaire*j+(j-1) , s) ;

              }
              Texte=Texte+line+s;
              }
              else
              {
                  for(int j=1;j<=(nbr-1);j++)
                  {
                      line.insert(MaxCarectaire*j+(j-1) , s) ;

                  }
                  Texte=Texte+line+s;

              }
          }



       }
       input.close();
    }
    return Texte;

}
