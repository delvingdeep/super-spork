/*
** This program performs various operations on matrices
**
** Author: Deep Doshi
** Reach me out at ddoshi@mtu.edu
**
*/

#include <iostream>

using namespace std;

int transMatrix();
int mulMatrix();

int main(){

  int ans = 0;

  // Displays the available matrix operation to user
  cout << "This Calculator can perform following Matrix operations: " << endl;
  cout << "1. Transpose" << endl << "2. Multiplication" << endl;
  cout << "Select any of the operation from above : ";
  cin >> ans;
  cout<< endl;

  // Selecting the operation user wishes to perform
  if(ans == 1){
    cout << "Performing Matrix Transpose" << endl;
    transMatrix();
  }
  else{
    cout << "Performing Matrix Multiplication" << endl;
    mulMatrix();
  }

  return 0;
}

/*
** This function performs Transpose operation of a user entered Matrix
*/
int transMatrix(){

  int a[10][10], i, j;
  int row=0, col=0;
  int trans[10][10];

  // Determines the dimension of the matrix
  cout << "Enter number of rows for a matrix: ";
  cin >> row;
  cout << endl;

  cout << "Enter number of columns for this matrix: ";
  cin >> col;
  cout << endl;

  // Stores element of user entered matrix in array a[][].
  cout << "Enter elements of matrix: " << endl;
  for(i = 0; i < row; ++i){
    for(j = 0; j < col; ++j){
      cout << "Enter elements a" << i + 1 << j + 1 << ": ";
      cin >> a[i][j];
    }
  }

  // Displays the entered matrix a[][]
  cout << endl << "Entered Matrix: " << endl;
  for(i = 0; i < row; ++i){
    for(j = 0; j < col; ++j){
      cout << " " << a[i][j];
      if(j == col - 1){
              cout << endl << endl;
            }
          }
        }

  // Finds transpose of enetered matrix a[][] and stores it in array trans[][]
  for(i = 0; i < row; ++i){
      for(j = 0; j < col; ++j){
          trans[j][i]=a[i][j];
        }
      }

  // Displays the transpose of the matrix
  cout << endl << "Transpose of Matrix: " << endl;
  for(i = 0; i < col; ++i){
      for(j = 0; j < row; ++j){
          cout << " " << trans[i][j];
          if(j == row - 1){
              cout << endl << endl;
            }
          }
        }

    return 0;
  }

/*
** This function performs Multiplication on user entered two matrices
*/
int mulMatrix(){
  int a[10][10], b[10][10];
  int mult[10][10];
  int row1, col1, row2, col2, i, j, k;

  // Determines the dimension of matrix, which is crucial for multiplication
  cout << "Needs two matrix for multiplication" << endl;

  cout << "Enter number of rows for first matrix: ";
  cin >> row1;
  cout << endl;

  cout << "Enter number of columns for first matrix: ";
  cin >> col1;
  cout << endl;

  cout << "Enter number of rows for second matrix: ";
  cin >> row2;
  cout << endl;

  cout << "Enter number of columns for second matrix: ";
  cin >> col2;
  cout << endl;

  /*
  ** If column of first matrix in not equal to row of second matrix,
  ** make user to re-enter the valid dimension of both matrices.
  */
  while (col1!=row2){
    cout << "!!!! Error !!!!!" << endl;
    cout << "column of first matrix not equal to row of second." << endl;

    cout << "Enter valid number of rows for first matrix: ";
    cin >> row1;
    cout << endl;

    cout << "Enter valid number of columns for first matrix: ";
    cin >> col1;
    cout << endl;

    cout << "Enter valid number of rows for second matrix: ";
    cin >> row2;
    cout << endl;

    cout << "Enter valid number of columns for second matrix: ";
    cin >> col2;
    cout << endl;
  }

    // Stores elements of the first matrix
    cout << "Enter elements for first matrix:" << endl;
    for(i = 0; i < row1; ++i){
        for(j = 0; j < col1; ++j){
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
          }
        }

    // Stores elements of the second matrix
    cout << endl << "Enter elements for second matrix:" << endl;
    for(i = 0; i < row2; ++i){
        for(j = 0; j < col2; ++j){
            cout << "Enter element b" << i + 1 << j + 1 << " : ";
            cin >> b[i][j];
          }
        }

    // Initializing the elements of matrix to zero to avoid any garbage values
    for(i = 0; i < row1; ++i){
        for(j = 0; j < col2; ++j){
            mult[i][j]=0;
          }
        }

    // Multiples matrix a and b; and then stores answer in array mult[][]
    for(i = 0; i < row1; ++i){
        for(j = 0; j < col2; ++j){
            for(k = 0; k < col1; ++k){
                mult[i][j] += a[i][k] * b[k][j];
              }
            }
          }

    // Displays the multiplication of two matrix.
    cout << endl << "Resultant Matrix: " << endl;
    for(i = 0; i < row1; ++i){
      for(j = 0; j < col2; ++j){
        cout << " " << mult[i][j];
        if(j == col2-1){
            cout << endl;
          }
        }
      }

    return 0;
  }
