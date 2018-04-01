#include<iostream>

using namespace std;

int main(){

  //variables are nothing but placeholders
  int a, b;
  int sum = 0, diff = 0, mult = 0, divi = 0;

  cout << "Enter a number: ";
  cin >> a;
  // cin is called input stream object
  // >> stream inseration operators

  cout << "Enter another number: ";
  cin >> b;

  sum = a + b;
  diff = a - b;
  mult = a * b;
  divi = a / b;

  cout << "Sum of above numbers:  " << sum << endl;
  cout << "Difference between above numbers: " << diff << endl;
  cout << "Product of above numbers: " << mult << endl;
  cout << "Dividing above numbers, we get: " << divi << endl;

  return 0;
}
