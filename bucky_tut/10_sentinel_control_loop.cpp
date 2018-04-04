/*
** Sentinel-controlled repetition is sometimes called indefinite repetition
** because it is not known in advance how many times the loop will be executed.
*/

#include<iostream>

using namespace std;

int main(){

  int num = 0;
  float sum = 0;
  int x = 0;            //variable to count the number entered

  // Finding avergae of the numbers entered

  while(num != -1){

    sum += num;
    x++;

    cout << "Enter any number or -1 to quit: ";
    cin >> num;
  }

  x--;    // To compensate the quit number i.e. -1

  cout << "The average of all " << x << " entered number is " << sum/x << endl;

  return 0;
}
