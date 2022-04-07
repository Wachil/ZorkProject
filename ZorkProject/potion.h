#ifndef POTION_H
#define POTION_H
#include "item.h"

class potion : public item
{
public:
    potion(QString description, int heal);
    QString description;
    int heal;
    void use();
    QString getDescription();
};

#endif // POTION_H
