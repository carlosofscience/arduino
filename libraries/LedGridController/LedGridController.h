#ifndef LedGridController_H
#define LedGridController_H

#include "Arduino.h"

class LedGridController
{
public:
  int numOfCells;
  CRGB leds[];

  TETRIS_GAME(int, int);

  void display();
  void setCell(int x, int y, CRGB color); //default to portrait config
  void clear();                           //not really needed?
};

#endif