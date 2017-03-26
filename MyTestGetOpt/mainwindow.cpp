#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QCommandLineOption>
#include <QCommandLineParser>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QCommandLineParser parser;
    QCommandLineOption Aoption("a");
    QCommandLineOption Boption("b");
    parser.addOption(Aoption);
    parser.addOption(Boption);
    //parser.process(*qApp);
    parser.process(*qApp);
    qDebug() << parser.isSet(Aoption);

    //or
    parser.process(QCoreApplication::arguments());
    qDebug() << parser.isSet(Aoption);
}

MainWindow::~MainWindow()
{
    delete ui;
}
