#include<iostream>
#include "ObjectClass.h"

using namespace std;

int main(){

  ObjectClass object1;    //creates object of the class

  ObjectClass *classPointer = &object1;   //pointer points to the address of the object

  // Access methods of the class using pointer
  classPointer->printSomething();    //whenever pointer is used to call class object,
  // arrow member function `->` is used

  // Access methods of the class using class object
  object1.printSomething();

  return 0;
}
