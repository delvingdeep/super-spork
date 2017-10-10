/*README: Formatting Output
**Goal
**Practice using cout to format output to console
**Print the variables in three columns:
**Ints, Floats, Doubles
*/

#include <iostream>
#include <iomanip>

int main()
{
    using namespace std;

    int a = 45;
    float b = 45.323;
    double c = 45.5468;
    int aa = a + 9;
    float bb = b + 9;
    double cc = c + 9;
    int aaa = aa + 9;
    float bbb = bb + 9;
    double ccc = cc + 9;

    cout<<"Int"<<setw(10)<<"Floats"<<setw(10)<<"Doubles"<<"\n";
    cout<<a<<setw(10)<<b<<setw(10)<<c<<"\n";
    cout<<aa<<setw(10)<<bb<<setw(10)<<cc<<endl;
    cout<<aaa<<setw(10)<<bbb<<setw(10)<<ccc<<endl;

    return 0;
}
