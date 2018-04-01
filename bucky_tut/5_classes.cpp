#include<iostream>
#include<string>

using namespace std;

class MyClass{

  // we need public methods in order to use private members of the class
  public:

    // Setter functions are use to edit private members
    void setName(string a){
      name = a;
    }

    // Inorder to access members, Getter functions are used
    // It has same datatype of that member elemnet
    string getName(){
      return name;
    }
  // making all the members private in a class is a good programming practice
  private:
    string name;

};
int main(){

  //creating class object
  MyClass object;
  object.setName("Deep Doshi");

  // checking whether the name variable is set or nothing
  cout << "The code repo is maintained by " << object.getName() << endl;

  return 0;
}
