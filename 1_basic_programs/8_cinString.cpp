/*Goal: practice std::cin for strings
**Write a program that prompts two users for their
**name, address, and phone number.
**Print the information to the console in the following format:
**name
**\/t\/t address
**\/t\/tphone number
*/

#include <iostream>
#include <string>

using namespace std;

int main(){

  //defining variable datatype
    string name1, name2;
    string address1, address2;
    string phone1, phone2;

  //For first user
    cout<<"Enter first user's name: \n";
    getline(cin, name1);

    cout<<"Enter first user's address: \n";
    getline(cin, address1);

    cout<<"Enter first user's phone number: \n";
    cin>>phone1;


  //For Second user
    cout<<"Enter second user's name: \n";
    getline(cin, name2);

    cout<<"Enter second user's address: \n";
    getline(cin, address2);

    cout<<"Enter second user's phone number: \n";
    cin>>phone2;

  //printing data for both user's to the console
    cout<<name1<<"\n";
    cout<<"\t\t"<<address1<<"\n";
    cout<<"\t\t"<<phone1<<"\n";

    cout<<name2<<"\n";
    cout<<"\t\t"<<address2<<"\n";
    cout<<"\t\t"<<phone2<<"\n";

    return 0;
}
