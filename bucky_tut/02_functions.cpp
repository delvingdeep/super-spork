#include<iostream>

using namespace std;

// function proto-typing
int addNumbers(int a, int b);

int main(){
  int x, y;
  int sum = 0;

  cout << "Enter two numbers to be added: \n";
  cin >> x >> y;

  sum = addNumbers(x,y);

  cout << "Sum of those numbers is " << sum << endl;
  return 0;
}

// function loop: adds two numbers
int addNumbers(int a, int b){
  return a+b;
}
