/* Program specific README

**GOAL
** Writing to the console
** Printing the variables types available in C++
** Printing the sizes of each variable to the console.
** Printing them in the following order:
** int, short, long, char, float, double, bool
**
** Use of the command sizeof(variable type) ie: sizeof(int)
*/

#include <iostream>

int main() {

    using namespace std;        //for adding std to namespace

    cout<<"int size = " <<sizeof(int)<<"\n";        // "\n" and "endl" both are used for breaking line
    cout<<"short size = "<<sizeof(short)<<endl;
    cout<<"long size = "<<sizeof(long)<<endl;
    cout<<"char size = "<<sizeof(char)<<endl;
    cout<<"float size = "<<sizeof(float)<<endl;
    cout<<"double size = "<<sizeof(double)<<endl;
    cout<<"bool size = "<<sizeof(double)<<endl;

    return 0;
}
