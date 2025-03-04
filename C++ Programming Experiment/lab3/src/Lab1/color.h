#pragma once
#include <graphics.h>

class color {
  int r = 255, g = 255, b = 255;
  color_t c=0xffffff;

 public:
  color(int r, int g, int b);

  color(color_t c);

  color() = default;

  color(const color& col);

  int getR();

  int getG();

  int getB();

  color_t getC();

  void setR(int r);

  void setG(int g);

  void setB(int b);

  void setC(color_t c);
};