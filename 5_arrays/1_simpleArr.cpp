/*Goal: Practice array manipulation in C++.
**
**The user will input 40 integers.
**Program puts them into an array. Then prints the array in the order the numbers were
**entered. Then prints in reverse order. Then sorts the array in ascending order
**and print it.
**The each print of the array is separated numbers in the array by
**one space.
**
**For example: the array were [3,4,55] the printout would be 3 4 55
*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int userInput[40];
    int temp = 0;

    for(int i = 0; i <40; i++)
    {
        cout<<"Enter "<<i<<"th number: "<<endl;
        cin>>userInput[i];
    }

    cout<<endl<<"The elements of this array are : "<<endl;
    for(int i = 0; i< 40; i++){
        cout<<userInput[i]<<" ";
    }

    cout<<endl<<"The elements of this array in reverse order are: "<<endl;
    for(int i = 0; i< 40; i++){
        cout<<userInput[39-i]<<" ";
    }

    //for ascending order sorting
    for(int i = 0; i < 40; i ++){
        for(int j = 0; j < 40; j++){
            if(userInput[i]>userInput[j]){
                temp = userInput[i];
                userInput[i] = userInput[j];
                userInput[j] = temp;
            }
        }
    }

    cout<<endl<<"The elements of this array sorted ascending order are: "<<endl;
    for(int i = 0; i < 40; i++){
        cout<<userInput[39-i]<<" ";
    }
    return 0;
}
