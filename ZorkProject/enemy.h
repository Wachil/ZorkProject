#ifndef ENEMY_H
#define ENEMY_H
#include "QString"

class Enemy
{
public:
    Enemy(QString name, int health, int damage);
    QString name = NULL;
    int health;
    int damage;
    QString infoEnemy();
    void attack();
    ~Enemy();
};

#endif // ENEMY_H
