#ifndef WEAPONS_H
#define WEAPONS_H
#include "QString"
#include "item.h"

class weapons : public item
{
public:
    weapons(QString name, int damage);
    QString description;
    int damage;
    void use();
    QString infoWeapons();
    inline QString getDescription();
};

#endif // WEAPONS_H
