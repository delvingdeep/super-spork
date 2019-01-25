/*
** Problem statement can be found on below link:
** https://www.hackerrank.com/challenges/c-class-templates/problem
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

/* ---- code solution starts ---- */
template <class T>
class AddElements
{
    T e1;
    T e2;

    public:
     AddElements(T ele1);
     T add(T ele2);
     T concatenate(T ele2);
};

template <class T>
AddElements<T>::AddElements(T ele1){
    e1 = ele1;
}

template <class T>
T AddElements<T>::add(T ele2){
    e2 = ele2;
    return e1 + e2;
}

template <class T>
T AddElements<T>::concatenate(T ele2){
    e2 = ele2;
    return e1 + e2;
}
/* --- end of solution --- */

int main () {
  int n,i;
  cin >> n;
  for(i=0;i<n;i++) {
    string type;
    cin >> type;
    if(type=="float") {
        double element1,element2;
        cin >> element1 >> element2;
        AddElements<double> myfloat (element1);
        cout << myfloat.add(element2) << endl;
    }
    else if(type == "int") {
        int element1, element2;
        cin >> element1 >> element2;
        AddElements<int> myint (element1);
        cout << myint.add(element2) << endl;
    }
    else if(type == "string") {
        string element1, element2;
        cin >> element1 >> element2;
        AddElements<string> mystring (element1);
        cout << mystring.concatenate(element2) << endl;
    }
  }
  return 0;
}
