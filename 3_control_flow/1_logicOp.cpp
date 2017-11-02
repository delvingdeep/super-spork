/*Goal: use logical and relational operators in a C++ program.
**Enlists all possible outputs for the given expression
**
**The expression: (A and B and C) or (A and( (not B) or (not C))) = Q
**
*/

#include<iostream>

using namespace std;

int main()
{
    //(A and B and C) or (A and( (not B) or (not C))) = Q
    int A=0, B=0, C=0, Q=0;

    //This output format is implemented
    // std::cout<<"A\tB\tC\t(A && B && C)\t\t(!B||!C)\t\t(A&&(!B||!C))\t\tQ\n";
    cout<<"A\tB\tC\t(A && B && C)\t\t(!B||!C)\t\t(A&&(!B||!C))\t\tQ\n";
    for(A=0; A<2; A++){
        for(B=0; B<2; B++){
            for(C=0; C<2; C++){

                //defines individual terms for simiplicity
                 int term1= (A&&B&&C);
                 int term2= (!B||!C);
                 int term3= (A&&(!B||!C));

              //Final expression
                 Q= term1 || term3;

              //display truth table
                 cout<<A<<"\t"<<B<<"\t"<<C<<"\t"<<term1<<"\t\t"<<term2<<"\t\t"<<term3<<"\t\t"<<Q<<"\n";
            }
        }
    }

    return 0;
}
