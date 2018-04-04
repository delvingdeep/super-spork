/*
** In general case there are three types of program files
** One is main.cpp file which contains main functions
** Second is class.cpp, which contains defination of all the methods of the class
** And third is class.h, header file, which has all class declaration
**
** Here I am using just main.cpp and class.h file as my system requires
** me to use template for using different files from the terminal
**
*/

#include<iostream>
#include "MyClass.h"

using namespace std;

int main(){

  // Creating an object "object" from MyClass
  MyClass object;

  return 0;
}
