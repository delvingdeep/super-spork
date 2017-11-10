/*Goal: Examine pointers!*/

#include <iostream>

int main()
{
    int a = 55;
    std::cout<<"a = "<<a<<"\n";
    std::cout<<"address of a is at &a = "<< &a<<"\n";
    return 0;
}

/* Intro part 2
** Goal: Dereferencing*/

// this is an integer variable with value = 55
int a = 55;

// this is a pointer that holds the address of the variable 'a'.
// if 'a' was a float, rather than int, so should be its pointer.
int * pointerToA = &a;

// If we were to print pointerToA, we'd obtain the address of 'a':
std::cout << "pointerToA stores " << pointerToA << '\n';

// If we want to know what is stored in this address, we can dereference pointerToA:
std::cout << "pointerToA points to " << * pointerToA << '\n';
