#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(ui->do_1, SIGNAL(clicked()), this, SLOT(on_do_1_clicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::playing(){
    QSoundEffect sound;
    sound.setSource(QUrl::fromLocalFile("sound.wav"));
    sound.play();
}

void MainWindow::on_do_1_clicked()
{
    ui->label->setText("Опа Опа");
    playing();
}


