/*
** This program shows the difference between variable++ and ++variable
*/

#include<iostream>

using namespace std;

int main(){

  int x = 0, ent_x = 0;

  cout << "Enter a variable: ";
  cin >> x;
  ent_x = x;


  cout << "Performing variable++" << endl;
  cout << "Value of x++ = " << x++ << endl;
  cout << "Value of x = " << x << endl << endl;
  cout << "Conclusion: Statement with variable++ is executed first and then the increment is done" << endl << endl;

  cout << "-------------------------" << endl << endl;
  cout << "Value of x is reset to " << ent_x << endl << endl;

  x = ent_x;

  cout << "Performing ++variable" << endl;
  cout << "Value of ++x = " << ++x << endl;
  cout << "Value of x = " << x << endl << endl;

  cout << "Conclusion: Statement with ++variable does increment first and executes statement" << endl << endl;

  // return 0 is optional in new C++
  // the complier will consider it as default if not included

}
