#include "Room.h"
#include "Command.h"

Room::Room(QString description, Enemy *enemy, bool lock) {
	this->description = description;
    this->enemy = enemy;
    this->lock = lock;

    if (instance == nullptr)
    {
        instance = this;
    }
}

void Room::setExits(Room *north, Room *east, Room *south, Room *west) {
	if (north != NULL)
		exits["north"] = north;
	if (east != NULL)
		exits["east"] = east;
	if (south != NULL)
		exits["south"] = south;
	if (west != NULL)
		exits["west"] = west;
}

QString Room::shortDescription() {
	return description;
}

QString Room::longDescription() {
    QString info = "Current room = " + description + ".\n" + exitString() + "\n";
    if(enemy != nullptr)
    {
        info += enemy->infoEnemy() + "\n";
    }
    else {
        info += "No enemy in this room \n";
    }
    return  info;
}

QString Room::exitString() {
    QString returnString = "Your possible exits =";
    for (map<QString, Room*>::iterator i = exits.begin(); i != exits.end(); i++)
		// Loop through map
		returnString += "  " + i->first;	// access the "first" element of the pair (direction as a string)
	return returnString;
}



Room* Room::nextRoom(QString direction) {
    map<QString, Room*>::iterator next = exits.find(direction); //returns an iterator for the "pair"
	if (next == exits.end())
		return NULL; // if exits.end() was returned, there's no room in that direction.
	return next->second; // If there is a room, remove the "second" (Room*)
				// part of the "pair" (<string, Room*>) and return it.
}

void Room::removeItem(int index)
{
    this->itemsInRoom.erase(itemsInRoom.begin()+index);
}

