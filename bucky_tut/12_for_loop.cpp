/*
** Even number Generator
*/

#include<iostream>

using namespace std;

int main(){

  int x = 0;
  cout << "Enter a number: ";
  cin >> x;

  cout << "The even numbers till " << x << " are: ";

  for(int i = 0; i <= x; i++){

    if((i%2) == 0){
      cout << i << " ";
    }
  }
  cout << endl;

}
