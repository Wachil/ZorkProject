#ifndef CHARACTER_H
#define CHARACTER_H
#include "QString"
#include "item.h"


class character
{
public:
    character(QString name, int health, int damage);
    QString name;
    unsigned int health : 8;
    int damage;

    inline static character *instance = nullptr;
};

#endif // CHARACTER_H
