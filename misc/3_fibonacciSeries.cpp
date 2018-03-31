/*
** Fibonacci Series
**
** The Fibonacci sequence is a series where the next term is the sum of pervious two terms.
** The first two terms of the Fibonacci sequence is 0 followed by 1.
**
** Example Fibonacci sequence: 0, 1, 1, 2, 3, 5, 8, 13, 21,.....
**
*/

#include<iostream>

using namespace std;

int main(){

  int firstTerm = 0;
  int secondTerm = 1;
  int term = 0;
  int sum = 0, temp_first = 0, temp_second = 0;

  cout<<"Fibonacci Sequence Generator started"<<endl;
  cout<<"Enter the number of terms for the the sequence: ";
  cin>>term;
  cout<<endl;

  if(term == 2){
    cout<<firstTerm<<", "<<secondTerm<<"."<<endl;
  }
  else{

    // Prints 0 and 1 as first two terms
    cout<<firstTerm<<" "<<secondTerm<<" ";

    // Prints rest of the terms
    for(int i=0; i<(term-2); i++){
      temp_first = firstTerm;
      temp_second = secondTerm;
      sum = temp_first + temp_second;

      secondTerm = sum;
      firstTerm = temp_second;

      cout<<secondTerm<<" ";
    }

      cout<<endl;
  }

  return 0;
}
