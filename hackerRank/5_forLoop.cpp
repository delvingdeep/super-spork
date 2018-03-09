/*
** Refer HackerRank site for the detailed problem statement
*/

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a = 0, b = 0, count = 0;

    cout<<"Enter starting number: ";
    cin>>a;
    cout<<endl;

    cout<<"Enter ending number: ";
    cin>>b;
    cout<<endl;

    //counter loop
    for(int i = a; i<=b; i++){
        count++;
    }

    //main loop
    for(int j=0; j<count; j++){
        if((a + j) <= 9){
            if((a+j)== 1){
                cout<<"one"<<endl;
            }
            else if((a+j)==2){
                cout<<"two"<<endl;
            }
            else if((a+j)==3){
                cout<<"three"<<endl;
            }
            else if((a+j)==4){
                cout<<"four"<<endl;
            }
            else if((a+j)==5){
                cout<<"five"<<endl;
            }
            else if((a+j)==6){
                cout<<"six"<<endl;
            }
            else if((a+j)==7){
                cout<<"seven"<<endl;
            }
            else if((a+j)==8){
                cout<<"eight"<<endl;
            }
            else{
                cout<<"nine"<<endl;
            }
        }
        else if((a+j) > 9 && (a+j)%2 == 0){
            cout<<"even"<<endl;
        }
        else{
            cout<<"odd"<<endl;
        }

    }
    return 0;
}
