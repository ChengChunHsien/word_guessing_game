#ifndef WORDBANK_H
#define WORDBANK_H

#include "Word.h"
#include <vector>

class WordBank
{
  private:
    std::vector<Word> words;

  public:
    void addWord(std::string word, std::string hint);
    Word getRandomWord();
};

#endif