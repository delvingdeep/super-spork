/*
** Sentinel Loop using do...while loop
**
** do...while loop is unique, in the sense
** it executes program atleast one time, before executing test condition
*/

#include<iostream>

using namespace std;

int main(){

  int num = 0;
  float sum = 0;
  int x = 0;            //variable to count the number entered

  // Finding avergae of the numbers entered

  do{
    sum += num;
    x++;

    cout << "Enter any number or -1 to quit: ";
    cin >> num;
  }while(num != -1);        // ";" is followed by while condition here

  x--;    // To compensate the quit number i.e. -1

  cout << "The average of all " << x << " entered number is " << sum/x << endl;

  return 0;
}
