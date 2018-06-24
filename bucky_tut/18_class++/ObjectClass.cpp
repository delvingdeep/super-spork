#include<iostream>
#include "ObjectClass.h"

using namespace std;

// Constructor will be intialized as soon as the object is made
ObjectClass::ObjectClass(){
  cout << "Constructor initialized" << endl;
}

// Deconstructor will be intialized at the end and will destroy the object
ObjectClass::~ObjectClass(){
  cout << "Deconstructor initialized" << endl;
}
