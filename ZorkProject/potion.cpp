#include "potion.h"
#include "character.h"
potion::potion(QString description, int heal) : item(description)
{
   this->description = description;
   this->heal = heal;
}

void potion::use()
{
    character::instance->health += heal;
}

QString potion::getDescription()
{
    return description;
}
