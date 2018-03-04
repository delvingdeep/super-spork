#include <iostream>

using namespace std;

int main()
{
    int userInput = 0;
    int maxNumber = 0;
    int minNumber = 100;
    int sumTotal = 0;
    float average = 0;

    //get the numbers from the user
    for(int i = 0; i < 15; i++)
    {
        cout << "Enter a number: ";
        cin>>userInput;
        cout << userInput << "\n";
        if(userInput > maxNumber)
        {
            maxNumber = userInput;
        }
        if(userInput < minNumber)
        {
            minNumber = userInput;
        }
        sumTotal = sumTotal + userInput;
    }
    cout << "Maximum number = " << maxNumber << endl;
    cout << "Minimum number = " << minNumber << endl;
    average = sumTotal / 15.0;
    cout << "Average = " << average << endl;
    return 0;
}
