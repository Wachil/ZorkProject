#include "weapons.h"
#include "character.h"
weapons::weapons(QString description, int damage) : item(description)
{
    this->description = description;
    this->damage = damage;
}

QString weapons::infoWeapons()
{
    return "Weapons in the room : " + description + " damage : " + QString::number(damage) + "\n";
}

void weapons::use()
{
    character::instance->damage = damage;
}

QString weapons::getDescription()
{
    return description;
}
