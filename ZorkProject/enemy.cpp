#include "enemy.h"

Enemy::Enemy(QString name, int health, int damage)
{
    this->name = name;
    this->health = health;
    this->damage = damage;
}

QString Enemy::infoEnemy(){
    return "Enemy : " +name + " Health : " + QString::number(health) + " Damage : " + QString::number(damage) + "\n";
}

Enemy::~Enemy()
{
    //nothing to do
}
