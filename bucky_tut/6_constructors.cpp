#include<iostream>
#include<string>

using namespace std;

class MyClass{

  public:
    // A constructor has same name as the class name
    MyClass(string b){
      /* As soon as the object is created, a consructor is called automatically
      ** For this reason it is used to assign initial value to the object members
      ** So now user need not have to assign intial value for every member
      */
      setName(b);
    }

    void setName(string a){
      name = a;
    }

    string getName(){
      return name;
    }

  private:
    string name;

};

int main(){
  MyClass object1("Deep Doshi");

  /*Removed manual setting*/
  //object.setName("Deep Doshi");
  cout << "The code repo is maintained by " << object1.getName() << endl;

  //Every instance of object is considered as a different entity and has different set of variables
  MyClass object2("Stay Tunned for more programs");
  cout << object2.getName() << endl;

  return 0;
}
