#ifndef WORDLE_H
#define WORDLE_H
#include "QString"
#include "mainwindow.h"
#include "ZorkUL.h"

class wordle
{
public:
    wordle(QString word_to_find);
    inline static wordle *instance = nullptr;
    bool check_word(QString input);
    QString word_to_find;
    int chance;

protected:
    const int size_max_word;
};

#endif // WORDLE_H
