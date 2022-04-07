#ifndef ITEM_H
#define ITEM_H
#include "QString"

class item
{
public:
    item(QString description);
    QString description;
    virtual void use() = 0;
    inline virtual QString getDescription();
};

#endif // ITEM_H
