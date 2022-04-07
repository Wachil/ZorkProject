#include "character.h"

character::character(QString name, int health, int damage)
{
    if (instance == nullptr)
    {
        instance = this;
    }
    this->name = name;
    this->health = health;
    this->damage = damage;
}
