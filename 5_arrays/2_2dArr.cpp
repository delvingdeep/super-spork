//Multi Dimensional Array Intro

#include<iostream>

using namespace std;

int main()
{
    int 2DimArr[2][3] = {0,1,2,3,4,5};
    for(int i=0; i<2;i++){
        for(int j=0;j<3;j++){
            cout<<"2DimArr["<<i<<"]["<<j<<"] = " << 2DimArr[i][j]<<endl;
          }
        }
    return 0;
}
