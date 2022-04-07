#include "wordle.h"

wordle::wordle(QString word_to_find) : size_max_word(4)
{
    if (instance == nullptr)
    {
        instance = this;
    }
    this->word_to_find = word_to_find;
    chance = 5;
}

bool wordle::check_word(QString input)
{
    QString res = "";
    bool found = true;
    if (input.length() != 4)
    {
        MainWindow::instance->print("You must word have 4 letters \n");
        chance += 1;
        return false;
    }

    for (int i = 0 ; i < size_max_word ; i++)
    {
       if(word_to_find[i] == input[i])
       {
           res += word_to_find[i];
       }
       else
       {
           found = false;
           res += "_";
       }
    }
    MainWindow::instance->print(res);
    return found;
}
