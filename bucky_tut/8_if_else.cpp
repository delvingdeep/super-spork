#include<iostream>

using namespace std;

int main(){

  int age = 0;

  cout << "Enter your age: ";
  cin >> age;

  if(age<14){
    cout << "You are underage" << endl;
  }
  else if(age>=14 && age < 20){
    cout << "You are just a teen" << endl;
  }
  else{
    if(age>50){
      cout << "You are getting old" << endl;
    }
    else{
      cout << "Perfect!!" << endl;
    }
  }

  return 0;
}
