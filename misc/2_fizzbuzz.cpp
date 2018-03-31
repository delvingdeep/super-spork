/*
** Write a program that prints the numbers from 1 to 100
** and for multiples of '3' print "Fizz" instead of the number
** and for the multiples of '5' print "Buzz".
*/

#include<iostream>

using namespace std;

int main(){

  int num=0;

  cout<<"Enter the max number for Fizzbuzz: ";
  cin>>num;

  for(int i=1; i<=num; i++){
    if((i%3)==0){
      cout<<"Fizz"<<endl;
    }
    else if((i%5)==0){
      cout<<"Buzz"<<endl;
    }
    else{
      cout<<i<<endl;
    }
  }
  return 0;
}
