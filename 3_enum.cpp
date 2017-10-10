/*Enum example*/

#include <iostream>

using namespace std;

int main()
{
    //Here MONTHS is a enum variable and has 12 possible values
    enum MONTHS {Jan, Feb, Mar, Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec};

    //defining total number of month in a year as constant variable
    const int noOfMonths = sizeof(MONTHS);

    //defining bestMonth as a variable type MONTHS
    MONTHS bestMonth;

    //assigning bestMonth one of the values of MONTHS
    bestMonth = Jan;

    //now we can check the value of bestMonths just
    //like any other variable
    if(bestMonth == Jan || noOfMonths == 12)
    {
        cout<<"January is the best month, becuase it's my birthday month\n";
    }
    return 0;
}
