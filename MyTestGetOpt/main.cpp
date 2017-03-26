#include "mainwindow.h"
#include <QApplication>
#include "unistd.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    int opt;

    for (int index = optind; index < argc; index++)
        qDebug ("Non-option argument %s\n", argv[index]);

    qDebug("start parsing opt");
    while ((opt = getopt(argc, argv, "a:b:cd")) != -1)
    {
       switch(opt)
       {
         case 'a':
           qDebug("a:");
           qDebug(optarg);
         break;

         case 'b':
           qDebug("b:");
           qDebug(optarg);
         break;

         case 'c':
           qDebug("c:");
           qDebug(optarg);
         break;

         case 'd':
           qDebug("d:");
           qDebug(optarg);
         break;
       }

    }


    for (int index = optind; index < argc; index++)
        qDebug ("Non-option argument %s\n", argv[index]);


    return a.exec();
}
