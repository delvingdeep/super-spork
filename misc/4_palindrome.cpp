#include <iostream>
#include <string>

bool palindrome_checker(std::string func_str) {
    for(int i = 0; i < func_str.length()/2; i++) {
        if(func_str[i] != func_str[(func_str.length()-1)-i]) 
            return false;
    }
    return true;
}

int main() {
    std::string the_str;

    std::cout << "Enter a string to Palindrome checker : ";
    std::cin >> the_str;

    if(palindrome_checker(the_str)) { std::cout << "It's a Palindrome\n"; }
    else { std::cout << "Not a Palindrome, Try again \n"; }

    return 0;
}