#include <iostream>
#include "Student.h"
using namespace std;

void Student :: assignDetails(int n, char na[])
{
  studentId=n;
  strcpy(name,na);
}

void Student::display() {
   cout << "Id is" << studentId << "\n";
   cout << "Name is" << name << "\n";
}

  
int main() {
  
// == DO NOT CHANGE THE MAIN PROGRAM =================
   Student mystd;
   mystd.assignDetails(1212, "Amalinga");
   mystd.display();
//==========================
   return 0;
}
