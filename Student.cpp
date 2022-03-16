#include "Student.h"
#include <iostream>
using namespace std;

// Assign studentId and name
Student::assignDetails(int id, char sName[]) {
  studentId = id;
  name = sName;
}

// Display StudentId and Name
Student::display() {
  cout << "Student Id : " << studentId <<< endl;
  cout << "Name : " << name << endl;
}
