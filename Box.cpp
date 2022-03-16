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
  cout << "Height : " << height << endl;
}

void getLength()
{
  cout << "Length : " << length << endl;
}

void getWidth()
{
   cout << "Width : " << width << endl;
}

// Implemenet the calcVolume() unction
int Box::calcVolume() {
  return length * width * height;
}
