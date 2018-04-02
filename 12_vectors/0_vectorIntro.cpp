// constructing vectors
#include <iostream>
#include <vector>  //vector library should be included!

using namespace std;

/*
** vector are defined as std::vector<type> name
*/

int main ()
{
  //creating a vector of integers
  vector<int> vectorInts;
  cout<<"vectorInts has "<<vectorInts.size()<<" elements\n";
  //.size() returns size of a vector

  //Changing the size of vectorInts to 6
  vectorInts.resize(6);
  cout<<"\nvectorInts now has "<<vectorInts.size()<<" elements"<<endl;

  return 0;
}
