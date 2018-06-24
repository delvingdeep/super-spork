/*
** Header files contains all class declaration
*/
#include<iostream>

using namespace std;

class MyClass
{
  public:
    MyClass();
};

/* The below defination shall go in class.cpp file in bigger projects */

// :: is called binary scope resolution operator
MyClass::MyClass(){
  cout << "Object created successfully" << endl;
}
