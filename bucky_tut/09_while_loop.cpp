#include<iostream>

using namespace std;

int main(){

  int x = 0;
  int num = 0, sum = 0;

  while(x < 5){
    cout << "Enter a number to be added: ";
    cin >> num;
    sum += num;
    x++;
  }

  cout << "The sum of entered numbers is " << sum << endl;

  return 0;
}
