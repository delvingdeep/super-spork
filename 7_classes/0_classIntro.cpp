/*
** Goal: practice creating and using a class
** Used the class 'Dog' to create two
** instances of the class, dog1 and dog2.
** Assigned dog1 the name: Bravo
** Assigned dog2 the name: Charlie
** Assigned dog1 the license #1234
** Assigned dog2 the license #5678
*/



#include<iostream>

using namespace std;

class Dog
{
    string name;
    int licenseNumber;
public:
    void setName(string nameIn);
    void setLicenseNumber(int licenseNumberIn);
    string getName();
    int getLicenseNumber();
    void printInfo();
};

void Dog::setName(string nameIn)
{
    name = nameIn;
}

void Dog::setLicenseNumber(int licenseNumberIn)
{
    licenseNumber = licenseNumberIn;
}

string Dog::getName()
{
    return name;
}

int Dog::getLicenseNumber()
{
    return licenseNumber;
}

void Dog::printInfo()
{
    cout<<"Name : "<<name<<endl;
    cout<<"License Number: "<<licenseNumber<<endl;
}


int main()
{
    Dog dog1, dog2;
    dog1.setName("Bravo");
    dog1.setLicenseNumber(1234);

    dog2.setName("Charlie");
    dog2.setLicenseNumber(5678);
    
    dog1.printInfo();
    dog2.printInfo();
    return 0;
}
