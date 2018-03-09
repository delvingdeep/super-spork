/*
** This program accepts values for a 4x4 array from user
** along with a vector of size 4.
** Performs a dot product to multiply the array by the vector.
** And lastly prints the resulting vector.
*/

#include<iostream>

using namespace std;

int main(){

  //defination
  const int row = 4;  //can be changes easily or maybe user generated with little modification
  const int col = 4;

  int multiArr[row][col];
  int vect[row], prod[row];

  int intermed = 0; //intermediate summation variable while multiplication

  //Prompt for user to enter values of Array
  cout<< "Enter the value for "<<row<<"x"<<col<<" array"<<endl;
  for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
      cout<<"Enter value for ["<<i<<"]["<<j<<"] element of the array: ";
      cin>>multiArr[i][j];
      cout<<endl;
    }
  }

  //Prompt user to enter values for vector
  cout<< "Now enter value for "<<row<<"th order vector"<<endl;
  for(int k=0; k<row; k++){
    cout<<"Enter the value for ["<<k<<"][0] :";
    cin>>vect[k];
    cout<<endl;
  }

  intermed = 0;
  //Performing dot product
  cout<<"Performing dot product multiplication"<<endl;
  for(int m=0; m<row; m++){
    for(int n=0; n<col; n++){
      intermed += (multiArr[m][n] * vect[m]);
    }
    prod[m] = intermed;
    intermed = 0;
  }

  //displaying product vector
  for(int l=0; l<row; l++){
    cout<<"The value of ["<<l<<"]: "<<prod[l]<<endl;
  }

}
