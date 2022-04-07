#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ZorkUL.h"
#include "character.h"
#include "enemy.h"
#include "wordle.h"
#include "Room.h"
#include "potion.h"
#include "item.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    if (instance == nullptr)
    {
        instance = this;
    }
    ui->setupUi(this);
    hidePlay();
    hideGameOver();
    hideWin();
    resetRoomInventory();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::resetRoomInventory()
{
    ui->listWidgetInventory->clear();
    for(item* it : ZorkUL::instance->currentRoom->itemsInRoom)
    {
        ui->listWidgetInventory->addItem(it->description);
    }
}
// print/read_input
QString MainWindow::read_wordle(){
    return ui->textEdit_wordle->toPlainText();
}

void MainWindow::print(QString string){
   ui->textEdit->append(string);
}

// show/hide fonction
void MainWindow::showPlay()
{
    //start
    print_welcome();
    ui->label->hide();
    ui->label_health->setText("Health : " + QString::number(character::instance->health));
    ui->label_name->setText("Name : " + character::instance->name);
    ui->label_your_damage->setText("Your damage : " + QString::number(character::instance->damage));
    hideWordle();

    //show
    ui->label_health->show();
    ui->label_name->show();
    ui->label_your_damage->show();
    ui->pushButtonEast->show();
    ui->pushButtonHystory->show();
    ui->pushButtonInfos->show();
    ui->pushButtonMap->show();
    ui->pushButtonNorth->show();
    ui->pushButtonSouth->show();
    ui->pushButtonTP->show();
    ui->pushButtonWest->show();
    ui->pushButton_attack->show();
    ui->textEdit->show();
    ui->pushButton_info_room->show();
    ui->pushButton_clear->show();
    ui->label_items_rooms->show();
    ui->listWidgetInventory->show();
    ui->pushButton_use->show();
}

void MainWindow::print_welcome()
{
    print("Welcome to ZorkUL !!!\n");
    print("Current room : " + ZorkUL::instance->currentRoom->shortDescription() + "\n");
}

void MainWindow::hidePlay()
{
    ui->label->hide();
    ui->label_health->hide();
    ui->label_name->hide();
    ui->label_wordle->hide();
    ui->pushButtonEast->hide();
    ui->pushButtonHystory->hide();
    ui->pushButtonInfos->hide();
    ui->pushButtonMap->hide();
    ui->pushButtonNorth->hide();
    ui->pushButtonSouth->hide();
    ui->pushButtonTP->hide();
    ui->pushButtonWest->hide();
    ui->pushButton_attack->hide();
    ui->pushButton_validate->hide();
    ui->textEdit->hide();
    ui->textEdit_wordle->hide();
    ui->pushButton_info_room->hide();
    ui->pushButton_clear->hide();
    ui->label_items_rooms->hide();
    ui->listWidgetInventory->hide();
    ui->pushButton_use->hide();
    ui->label_your_damage->hide();
}
void MainWindow::showMenu()
{
    ui->label_menu->show();
    ui->pushButton_play->show();
}

void MainWindow::hideMenu()
{
    ui->label_menu->hide();
    ui->pushButton_play->hide();
}

void MainWindow::showWordle()
{
    ui->textEdit_wordle->show();
    ui->pushButton_validate->show();
    ui->label_wordle->show();
}

void MainWindow::hideWordle()
{
    ui->textEdit_wordle->hide();
    ui->pushButton_validate->hide();
    ui->label_wordle->hide();
}

void MainWindow::hideGameOver()
{
    ui->label_game_over->hide();
    ui->pushButton_restart->hide();
}

void MainWindow::showGameOver()
{
    ui->label_game_over->show();
    ui->pushButton_restart->show();
}

void MainWindow::showWin()
{
    ui->label_win_msg->show();
    ui->pushButton_tomenu->show();
}

void MainWindow::hideWin()
{
    ui->label_win_msg->hide();
    ui->pushButton_tomenu->hide();
}
// all button fonction
void MainWindow::on_pushButtonNorth_clicked()
{
    QString direction = ZorkUL::instance->go("north");
    ui->textEdit->append(direction);
}

void MainWindow::on_pushButtonSouth_clicked()
{
    QString direction = ZorkUL::instance->go("south");
    ui->textEdit->append(direction);
}

void MainWindow::on_pushButtonWest_clicked()
{
    QString direction = ZorkUL::instance->go("west");
    ui->textEdit->append(direction);
}

void MainWindow::on_pushButtonEast_clicked()
{
    QString direction = ZorkUL::instance->go("east");
    ui->textEdit->append(direction);
}

void MainWindow::on_pushButtonTP_clicked()
{
    QString newroom = ZorkUL::instance->tp();
    ui->textEdit->append(newroom);
}

void MainWindow::on_pushButtonMap_clicked()
{
   if(ZorkUL::instance->showMap == true)
   {
       ui->label->hide();
       ZorkUL::instance->showMap = false;
   }
   else
   {
       ui->label->show();
       ZorkUL::instance->showMap = true;
   }
}

void MainWindow::on_pushButtonHystory_clicked()
{
    ui->textEdit->append("You ventured into a dungeon with your sister, yet your sister was captured and locked in a room. Therefore, you must do everything to find it. But be careful the dungeon is filled with enemi. \n");
}

void MainWindow::on_pushButtonInfos_clicked()
{
    ui->textEdit->append("To move between rooms you have 4 buttons to go north, south, east and west \n"
                         "Press the button TP to teleport in a random room \n"
                         "Press the button MAP to show the map \n"
                         "Press the button History to know the history \n");
}

void MainWindow::on_pushButton_attack_clicked()
{
    if(ZorkUL::instance->currentRoom->enemy != nullptr) // if the enemy exists
    {
        Enemy &enemy = *ZorkUL::instance->currentRoom->enemy;
        character *charact = character::instance;
        enemy.health -= charact->damage; // character attack
        ui->textEdit->append("Enemy health after attack : " + QString::number(enemy.health));
        charact->health -= enemy.damage;
        if(charact->health <= 0)
        {
            hidePlay();
            showGameOver();
        }
        ui->label_health->setText("Health : " + QString::number(charact->health));
        ui->textEdit->append("Your health after attack of the enemy : " + QString::number(character::instance->health));
        if(enemy.health <= 0) // if enemy is dead
        {
            ui->textEdit->append("The enemy is dead \nThe door is open\n");

            ZorkUL::instance->currentRoom->lock = false;
            delete ZorkUL::instance->currentRoom->enemy;
            ZorkUL::instance->currentRoom->enemy = nullptr;
        }
    }
}

void MainWindow::on_pushButton_validate_clicked()
{
    bool found = wordle::instance->check_word(read_wordle());
    ui->textEdit_wordle->clear();
    if (found == false)
    {
        wordle::instance->chance--;
        print("You word is not correct try again \n");
        print("Chance = " + QString::number(wordle::instance->chance) + "\n");
    }
    else
    {
        print("You found the word !!! The door is open \n");
        ZorkUL::instance->currentRoom->lock = false;
        hideWordle();
    }

    if(wordle::instance->chance == 0)
    {
        //GAME OVER
    }
}

void MainWindow::on_pushButton_play_clicked()
{
    showPlay();
    hideMenu();
}

void MainWindow::on_pushButton_restart_clicked()
{
    showMenu();
    hideGameOver();
    ZorkUL::instance->play();
    ui->textEdit->clear();
    resetRoomInventory();
}


void MainWindow::on_pushButton_clear_clicked()
{
    ui->textEdit->clear();
}


void MainWindow::on_pushButton_info_room_clicked()
{
    print(ZorkUL::instance->currentRoom->longDescription());
}


void MainWindow::on_pushButton_use_clicked()
{
    character *charact = character::instance;
    int index = ui->listWidgetInventory->currentIndex().column();
    if (index != -1)
    {
        ZorkUL::instance->currentRoom->itemsInRoom[index]->use();
        ZorkUL::instance->currentRoom->removeItem(index);
        ui->label_health->setText("Health : " + QString::number(charact->health));
        ui->label_your_damage->setText("Your damage : " + QString::number(character::instance->damage));
        resetRoomInventory();
    }
}


void MainWindow::on_pushButton_tomenu_clicked()
{
    showMenu();
    hideWin();
    ZorkUL::instance->play();
    ui->textEdit->clear();
    resetRoomInventory();
}

