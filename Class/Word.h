#ifndef WORD_H
#define WORD_H

#include <string>

class Word
{
  private:
    std::string word;
    std::string hint;

  public:
    Word(std::string w, std::string h);

    std::string getWord();

    std::string getHint();
};

#endif