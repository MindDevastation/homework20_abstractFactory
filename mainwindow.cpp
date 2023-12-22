#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "abstractfactory.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    //First Abstract Factory
    firstFactory* fFact = new firstFactory();
    const abstractName* nameOne = fFact->createName();
    const abstractEngine* engOne = fFact->createEngine();
    const abstractBonnet* bonOne = fFact->createBonnet();
    const abstractCarPrice* carPriceOne = fFact->createCarPrice();
    ui->carName->setText("Car Name: " + nameOne->carName());
    ui->carEngine->setText("Car Eninge: " + engOne->engineName());
    ui->carBonnet->setText("Car Bonnet: " + bonOne->bonnetName());
    ui->carPrice->setText("Car Price: " + QString::number(carPriceOne->carPrice()) + "$");
    delete carPriceOne;
    delete bonOne;
    delete engOne;
    delete nameOne;
    delete fFact;

    //Second Abstract Factory
    secondFactory* sFact = new secondFactory();
    const abstractName* nameTwo = sFact->createName();
    const abstractEngine* engTwo = sFact->createEngine();
    const abstractBonnet* bonTwo = sFact->createBonnet();
    const abstractCarPrice* carPriceTwo = sFact->createCarPrice();
    ui->carName_2->setText("Car Name: " + nameTwo->carName());
    ui->carEngine_2->setText("Car Eninge: " + engTwo->engineName());
    ui->carBonnet_2->setText("Car Bonnet: " + bonTwo->bonnetName());
    ui->carPrice_2->setText("Car Price: " + QString::number(carPriceTwo->carPrice()) + "$");
    delete carPriceTwo;
    delete bonTwo;
    delete engTwo;
    delete nameTwo;
    delete sFact;

    //Third Abstract Factory
    thirdFactory* tFact = new thirdFactory();
    const abstractName* nameThree = tFact->createName();
    const abstractEngine* engThree = tFact->createEngine();
    const abstractBonnet* bonThree = tFact->createBonnet();
    const abstractCarPrice* carPriceThree = tFact->createCarPrice();
    ui->carName_3->setText("Car Name: " + nameThree->carName());
    ui->carEngine_3->setText("Car Eninge: " + engThree->engineName());
    ui->carBonnet_3->setText("Car Bonnet: " + bonThree->bonnetName());
    ui->carPrice_3->setText("Car Price: " + QString::number(carPriceThree->carPrice()) + "$");
    delete carPriceThree;
    delete bonThree;
    delete engThree;
    delete nameThree;
    delete tFact;
}

