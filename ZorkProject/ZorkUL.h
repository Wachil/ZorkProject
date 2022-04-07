#ifndef ZORKUL_H_
#define ZORKUL_H_
#include "Room.h"
#include <iostream>
#include "QString"
#include "enemy.h"

class ZorkUL {
    friend class character;
private:
    //Parser parser;
    void createRoomsEnemy();
	void printWelcome();
	void printHelp();
    vector <Room*> rooms;
    void createEnemys();
    Room *wordleRoom;
    Room *winRoom;
public:
	ZorkUL();
	void play();
    void menu();
    QString go(QString direction);
    QString tp();
    inline static ZorkUL *instance = nullptr;
    bool showMap = false;
    Room *currentRoom;
};

#endif /*ZORKUL_H_*/
