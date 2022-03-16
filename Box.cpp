#include "Box.h"
#include <iostream>
using namespace std;

// Implement setters and getters
void Box::setLength(int l)
{
  length = l;
}

void Box::setWidth(int w)
{
  width = w;
}

void Box::setHeight(int h)
{
  height = h;
}

int Box::getHeight()
{
  cout << height;
}

int Box::getLength()
{
  cout << length;
}

int Box::getWidth()
{
   cout << width;
}

// Implemenet the calcVolume() unction
int Box::calcVolume() {
  cout << length * width * height;
}
