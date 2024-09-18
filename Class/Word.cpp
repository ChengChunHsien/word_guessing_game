#include <Word.h>

Word::Word(std::string w, std::string h) : word(w), hint(h)
{
}

std::string Word::getWord()
{
    return word;
}

std::string Word::getHint()
{
    return hint;
}