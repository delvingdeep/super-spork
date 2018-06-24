#include<iostream>

using namespace std;

class MyClass{
  public:         //making anything public mean it can be accessed outside class
    void printSomething(){
      cout << "Printing from the class" << endl;
    }
};
  
int main(){

  //inorder to access function/methods from the class, class object has to be created
  MyClass myObject;
  myObject.printSomething();
  // dot(.) sperator is used as access specifier for using function from the class

  return 0;
}
