#include "Box.h"

// Implement setters and getters
void setValues(int l, int w, int h)
{
  length = l;
  width = w;
  height = h;
}

void getValues()
{
  cout << "Length : " << length << endl;
  cout << "Width : " << width << endl;
  cout << "Height : " << height << endl;
}
// Implemenet the calcVolume() unction
int Box::calcVolume() {
  return length * width * height;
}
