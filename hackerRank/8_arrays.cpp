#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {

    int length = 0;         //holds size of array
    scanf("%d", &length);

    int myArr[length];

    //takes in rest of the console data as array elements
    for(int j=0; j<length; j++){
        scanf("%d", &myArr[j]);
    }

    for(int i=0; i<length; i++){
        cout << myArr[(length-1)-i] << " ";
    }
    return 0;
}
