#ifndef ROOM_H_
#define ROOM_H_

#include <map>
#include "QString"
#include <vector>
#include "item.h"
#include "potion.h"
#include "enemy.h"
#include "weapons.h"

using namespace std;
using std::vector;


class Room {

private:
    QString description;
    map<QString, Room*> exits;
    QString exitString();


public:
    int numberOfItems();
    Room(QString description, Enemy *enemy = nullptr,bool lock = false);
	void setExits(Room *north, Room *east, Room *south, Room *west);
    QString shortDescription();
    QString longDescription();
    Room* nextRoom(QString direction);
    Enemy *enemy;
    bool lock;
    inline static Room *instance = nullptr;
    vector <item*> itemsInRoom;
    void removeItem(int index);

    bool operator==(Room room)
    {
        return this->description == room.description;
    }
};

#endif
