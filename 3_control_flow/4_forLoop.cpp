/*This program asks a user for five numbers.
**Prints out the sum and average of the five numbers.
*/

#include<iostream>

using namespace std;

int main(){

    //asking user for five numbers and then displaying it to the console

    int i, input=0, sum=0, avg=0;

    for(i=0;i<5;i++){
        cout<<"Enter value"<<i<<": ";
        cin>>input;
        sum += input;
        if(i==4){
            cout<<"The sum of 5 numbers is "<<sum<<endl;
            cout<<"The average of 5 numbers is "<<sum/5.0<<endl;
        }
    }

    return 0;
}
