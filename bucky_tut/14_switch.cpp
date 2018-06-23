/*
** A Switch statement is used in place of if Loop sometimes
** It saves a lot of compute time as it breaks directly to specific case
** It has a default case, in case value matches none pre-defined cases
*/

#include<iostream>

using namespace std;

int main(){

  int x = 0;

  cout << "Enter a number between 1 and 5 : ";
  cin >> x;

  switch(x){
    case 1:
      cout << " You entered One" << endl;
      break;

    case 2:
      cout << "You entered Two" << endl;
      break;

    case 3:
      cout << "You entered Three" << endl;
      break;

    case 4:
      cout << "You entered Four" << endl;
      break;

    case 5:
      cout << "You entered Five" << endl;
      break;

    default:
      cout << "Number entered is out of range" << endl;
  }
}
