/*Goal: Practice writing generic functions*/

#include<iostream>

// Template function prototyping
template <typename T>
T sumTwo(T in1, T in2);

int main()
{
    int a = 90;
    int b = 1;
    std::cout<<a <<" + "<<b<<" = "<< sumTwo(a,b);
    return 0;
}

// Template or generic function defination
template <typename T>
T sumTwo(T in1, T in2){
    T sum;
    sum = in1 + in2;
    return sum;
}
