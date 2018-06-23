#include<iostream>

using namespace std;

int main(){

  // an integer variable with some random value
  int variable = 4;

  cout << &variable << endl;    // sign `&` gives out address of the variable

  // an integer pointer variable
  int *variablePointer; // sign `*` notifies complier of it being a pointer

  variablePointer = &variable; // once declared, it `*` is not required to be followed everytime

  cout << variablePointer << endl; // will print the address of variable

  return 0;
}
