#include "WordBank.h"
#include <cstdlib>
#include <ctime>

void WordBank::addWord(std::string word, std::string hint)
{
    words.push_back(Word(word, hint));
}
Word WordBank::getRandomWord()
{
    srand(time(0));
    int randomIndex = rand() % words.size();
    return words[randomIndex];
}