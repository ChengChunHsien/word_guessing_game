#ifndef GMAECENTER_H
#define GMAECENTER_H

#include "WordBank.h"

class GameCenter
{
  private:
    WordBank wb;

  public:
    GameCenter();
    void startGame();
};

#endif