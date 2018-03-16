/*
** Goal: practice creating and using classes.
** Created a class called Cat.
** Created the following members:
** private members: name, breed, age
** public members: setName, setBreed,setAge
** getName, getBreed, getAge, printInfo*/

#include<iostream>

using namespace std;

class Cat
{
    string name;
    string breed;
    int age;

    public:

    void setName(string nameIn);
    void setBreed(string breedIn);
    void setAge(int ageIn);

    string getName();
    string getBreed();
    int getAge();

    void printInfo();
};

void Cat::setName(string nameIn){
    name = nameIn;
}

void Cat::setBreed(string breedIn){
    breed = breedIn;
}

void Cat::setAge(int ageIn){
    age = ageIn;
}

string Cat::getName(){
    return name;
}

string Cat::getBreed(){
    return breed;
}

int Cat::getAge(){
    return age;
}

void Cat::printInfo(){
    cout<<"Name: "<<name<<endl;
    cout<<"Breed: "<<breed<<endl;
    cout<<"Age: "<<age<<endl;
}


int main(){

    Cat cat1;

    cat1.setName("Tom");
    cat1.setBreed("Cat");
    cat1.setAge(5);

    cat1.printInfo();

    return 0;
}
