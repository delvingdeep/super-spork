/*
** This program is basic intro of a Structure in C++
**
** Structure is user defined data type
** which allows user to combine data items of different kinds
**
** Here I am creating a structure named student
** with following attributes: Name, Age, Class(level)
*/

#include<iostream>

using namespace std;

// defining a structure
struct student{           // struct identifier
  char name[50];          // members of the structure
  int age;
  int level;
};                // Semi-colon (;) is must

int main(){

  // creating a structure instance for student 1, quite similar to Classes
  student std1;

  cout << "Enter name of the student: ";
  cin.get(std1.name, 50);

  cout << "Enter age of the student: ";
  cin >> std1.age;

  cout << "Enter level for the student (1 for Undergrad/ 2 for Grad): ";
  cin >> std1.level;
  cout << endl;

  cout << "-------- Retriveing information -------" << endl;
  cout << "Name: " << std1.name << endl;
  cout << "Age: " << std1.age << endl;

  if(std1.level == 1){
    cout << "Level: Undergrad" << endl;
  }
  else{
    cout << "Level: Grad" << endl;
  }

  return 0;

}
