#include "Box.h"
#include <iostream>
using namespace std;

// Implement setters and getters
void setValues(int l, int w, int h)
{
  length = l;
  width = w;
  height = h;
}

void getHeight()
{
  cout << height;
}

void getLength()
{
  cout << length;
}

void getWidth()
{
   cout << width;
}

// Implemenet the calcVolume() unction
int Box::calcVolume() {
  return length * width * height;
}
