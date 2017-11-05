/*Program for Switch statement with breaks
**
**This program asks the user for
**two float numbers. Then asks the user if they would like to:
**add the numbers, subtract the numbers, multiply the numbers,
**divide the numbers.
**
**The program then prints the numbers with the chosen
**operation and the solution.
*/

#include <iostream>

using namespace std;

int main()
{
    float in1, in2, ans;
    char op;        //operation variable

    cout<<"Enter two numbers:\n";
    cin>>in1;
    cin>>in2;
    cout<<"Enter the operation '+','-','*','/':\n";
    cin>>op;

    //using switch functionality to select right operation
    switch(op){
        case '+':
        {
            ans = in1 + in2;
            break;
        }

        case '-':
        {
            ans = in1 -in2;
            break;
        }

        case '*':
        {
            ans = in1 * in2;
            break;
        }

        case '/':
        {
            ans = in1/in2;
            break;
        }
    }

    //display final answer
    cout<<"The user enters: "<<in1<<" "<<in2<<" "<<op<<endl;
    cout<<"The program will output: "<<in1<<" "<<op<<" "<<in2<<" = "<<ans<<endl;

    return 0;
}
