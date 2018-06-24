#include<iostream>
#include "ObjectClass.h"

using namespace std;

int main(){

  ObjectClass regObject;    //creates object of the class
  regObject.printSomething();

  const ObjectClass constObject;    // this is how constant object is declared

  // constObject.printSomething();
  // it won't work as constant objects requires constant function

  constObject.printAnything();    // it will work out as function is constant

  return 0;
}
