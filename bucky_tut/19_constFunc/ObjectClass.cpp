#include<iostream>
#include "ObjectClass.h"

using namespace std;

// Constructor will be intialized as soon as the object is made
ObjectClass::ObjectClass(){
}

void ObjectClass::printSomething(){
  cout << "Printing from regular function" << endl;
}

void ObjectClass::printAnything() const{
  cout << "Printing from constant function" << endl;
}
