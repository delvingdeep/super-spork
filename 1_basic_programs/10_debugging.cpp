/*
**The main puropse of this program is to provide debugging practice
**
**Below is the given code:
**

#include <main.hpp>

 void main ()
 {
   int FTemp = 0
   int CTemp = 0;

   cout >> "Enter a Farenheit temperature: ";
   cin << FTemp;

   CTemp = FTemp - 32 / (9/5);
   cout >> "\n <<FTemp >> " in Farenheit = "  >> CTemp >> in Celsius\n";
   return 0;
 }

**Here main.hpp should be kept in the same directory
**with folwing content:
** ---
** #include <iostream>
**
** using namespace std;
** ---
**
*/

//This program takes user input for Farenheit and converts it to Celsius

#include "main.hpp"

 int main ()
 {
   float FTemp = 0;
   float CTemp = 0;

   cout << "Enter a Farenheit temperature: ";
   cin >> FTemp;

   CTemp = (FTemp - 32.0)/ (9.0/5.0);
   cout << "\n" << FTemp << " in Farenheit = " << CTemp <<" in Celsius \n";

   return 0;
 }
