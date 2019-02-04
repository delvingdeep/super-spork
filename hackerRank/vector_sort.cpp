/*
** Problem statement can be found at below hackerrank link:
** https://www.hackerrank.com/challenges/vector-sort/problem
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {   
    int size=0, x=0;
    vector<int> v;

    // Reads size of vector elements from the console
    cin >> size;

    // Assigns elements in the vector
    for(int i=0; i<size; i++){
        cin >> x;
        v.push_back(x);
        x=0; 
    }
    
    // Sorts all the element in the vector
    sort(v.begin(),v.end());

    for(int i=0; i<size; i++){
        cout << v[i] << " ";
    }

    return 0;
}
