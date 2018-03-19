/*
** Problem statement
** Two sorted arrays are given,
** And this function finds duplicate elements in both.
**
** This is the function file for the above Problem
** I tried to implement Brute Force apporach in solving it.
**
** Author: Deep Doshi
**
*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> findDuplicates( const vector<int>& arr1, const vector<int>& arr2)
{
  int ele=0;     //defining and intializing common element
  vector<int> out;  //output vector to hold results

  for(int i =0; i<arr1.size(); i++){
    for(int j=0; j<arr2.size(); j++){
      if(ele1 == arr2[j]){
        out.push_back(ele1);
      }
    }
  }
  return out;
}
