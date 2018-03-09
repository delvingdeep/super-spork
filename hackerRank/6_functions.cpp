/*
** Task: Add `int max_of_four(int a, int b, int c, int d)`
** which finds the greatest number among four numbers
** displays the greatest number on console
*/

#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d);

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}

int max_of_four(int a, int b, int c, int d){
    int greatest = 0;
    if(a>b && a>c && a>d){
        greatest = a; //a is the greatest number
    }
    else if(b>a && b>c && b>d){
        greatest = b;  //b is the greatestnumber
    }
    else if(c>a && c>b && c>d){
        greatest = c;  //c is the greatest number
    }
    else{
        greatest = d;  //d is the greatest number
    }
    return greatest;
}
