#include "item.h"

item::item(QString description)
{
    this->description = description;
}

void item::use()
{
    //this fonction do nothing
}

QString item::getDescription()
{
    return description;
}
