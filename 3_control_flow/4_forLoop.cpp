/*This program asks a user for five numbers.
**Prints out the sum and average of the five numbers.
*/

#include<iostream>

using namespace std;

int main(){

    //asking user for five numbers and then displaying it to the console
    int i, input=0, sum=0;
    float avg;

    for(i=0;i<5;i++){
        cout<<"Enter value "<<i+1<<": "<<endl;
        cin>>input;
        sum += input;
        }

    avg = sum/5.0;

    cout<<"The sum of entered "<<i<<" numbers is "<<sum<<endl;
    cout<<"The average of entered "<<i<<" number is "<<avg<<endl;

    return 0;
}
