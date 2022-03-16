#include "Student.h"
#include <iostream>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int id, char sName[]) {
  studentId = id;
  name = sName;
}

// Display StudentId and Name
void Student::display() {
  cout << "Student Id : " << studentId <<< endl;
  cout << "Name : " << name << endl;
}
