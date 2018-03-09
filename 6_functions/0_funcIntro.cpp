//Void function usage as a part of Function Intro

#include<iostream>

using namespace std;

void printMessage(); //Functiion declaration is placed BEFORE main()

int main()
{
    printMessage();     //calling a function
    return 0;
}

// Function definition is conventionally placed after main
void printMessage()
{
    cout<<"It's generated from a function!"<<endl;
}
