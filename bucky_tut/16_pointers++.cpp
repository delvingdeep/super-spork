#include<iostream>

using namespace std;

void passByValue(int x);
void passByReference(int *x);

int main(){

  int value_number = 10;
  int ref_number = 10;

  // calling function for comparing results
  passByValue(value_number);
  passByReference(&ref_number); // & sign passes the address of the variable
  //which is nothing but the pointer value to that variable

  // prints the variable
  cout << "Pass by value variable : " << value_number << endl;
  cout << "Pass by reference variable : " << ref_number << endl;

  return 0;
}

/*
** This function will pass the value of number by value
** This function will create a copy of number and modify the copy
*/
void passByValue(int x){
  x = 20;
}

/*
** The below function will pass value of the number by reference
** Since value is passed by reference, function argument is a pointer
** in simple words, here function takes a pointer
**
** This function will have direct access to the variable and
** any modification to it will result in change in actual value
*/
void passByReference(int *x){
  *x = 20;    // * sign is used to access the address of the number/variable
}
