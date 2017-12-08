/*

Task
Read three numbers from stdin and print their sum to stdout.

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Reads input from STDIN. Prints output to STDOUT */  
    int a, b, c, s =0;
    cin>>a>>b>>c;
    s = a+b+c;
    cout<<s;
    return 0;
}
