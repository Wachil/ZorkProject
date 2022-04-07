#include <iostream>

using namespace std;
#include "ZorkUL.h"
#include "enemy.h"
#include "character.h"
#include "wordle.h"
#include "potion.h"
#include "item.h"
#include "weapons.h"
#include "QFile"
#include "QTextStream"
#include "random"
#include "QCoreApplication"

ZorkUL::ZorkUL() {
    play();
    if (instance == nullptr)
    {
        instance = this;
    }
}

void ZorkUL::play() {
    wordleRoom = new Room("d",nullptr,true);
    winRoom = new Room("e",nullptr);
    createRoomsEnemy();
    character::instance = new character("Antony",200, 20);
}

void ZorkUL::menu()
{

}

void ZorkUL::createRoomsEnemy()  {
        Room *a, *b, *c, *d, *e, *f, *g, *h, *i, *j;
        a = new Room("a", new Enemy("Clement", 100,10),true);
        b = new Room("b");
        //c = wordleRoom;
        c = new Room("c");
        d = wordleRoom;
        e = winRoom;
        f = new Room("f", new Enemy("Alexandre",150,20),true);
        g = new Room("g", new Enemy("Alexander",200,5),true);
        h = new Room("h");
        i = new Room("i");
        j = new Room("j");
        rooms.push_back(a);
        rooms.push_back(b);
        rooms.push_back(c);
        rooms.push_back(d);
        rooms.push_back(e);
        rooms.push_back(f);
        rooms.push_back(g);
        rooms.push_back(h);
        rooms.push_back(i);
        rooms.push_back(j);

    //             (N, E, S, W)
        a->setExits(f, b, d, c);
        b->setExits(NULL, j, NULL, a);
        c->setExits(NULL, a, NULL, NULL);
        d->setExits(a, e, NULL, i);
        e->setExits(NULL, NULL, NULL, d);
        f->setExits(NULL, g, a, h);
        g->setExits(NULL, NULL, NULL, f);
        h->setExits(NULL, f, NULL, NULL);
        i->setExits(NULL, d, NULL, NULL);
        j->setExits(NULL, NULL, NULL, b);

     // add potion
        a->itemsInRoom.push_back(new potion("heal xs",5));
        g->itemsInRoom.push_back(new potion("heal m",10));
        j->itemsInRoom.push_back(new potion("heal xl",20));

       // weapons
        g->itemsInRoom.push_back(new weapons("Sword Of Zeus damage = 50",50));
        currentRoom = h;
}

QString ZorkUL::go(QString direction) {
	//Make the direction lowercase
	//transform(direction.begin(), direction.end(), direction.begin(),:: tolower);
    //Move to the next room
    if (currentRoom->lock == false)
    {
        Room* nextRoom = currentRoom->nextRoom(direction);
        if (nextRoom == NULL)
            return("direction null \n");
        else
        {
            currentRoom = nextRoom;
            //using operator overload ==
            //play wordle
            if(currentRoom == wordleRoom and currentRoom->lock == true)
            {
                MainWindow::instance->showWordle();
                MainWindow::instance->print("Welcome to the wordle room play or die\n"
                                            "You have to found the word at 4 letters\n");
                QFile inputFile(QCoreApplication::applicationDirPath() + "/wordle.txt");
                vector <QString> listOfWords;
                if (inputFile.open(QIODevice::ReadOnly | QIODevice::Text))
                {
                    QTextStream in(&inputFile);
                    while (!in.atEnd())
                    {
                        QString line = in.readLine();

                    } inputFile.close();
                }
                listOfWords.push_back("play");
                listOfWords.push_back("exit");
                listOfWords.push_back("game");
                int random_num = rand() % 2;
                wordle::instance = new wordle(listOfWords[random_num]);
                MainWindow::instance->print("You have " + QString::number(wordle::instance->chance) + " chance \n");
            }

            if(currentRoom == winRoom)
            {
                MainWindow::instance->showWin();
                MainWindow::instance->hidePlay();
            }
            MainWindow::instance->resetRoomInventory();
            return currentRoom->longDescription();
        }
    }
    else
    {
        return "Room is lock \n";
    }
}

QString ZorkUL::tp() {
    currentRoom = rooms[rand() % 9];
    return currentRoom->longDescription();
}
