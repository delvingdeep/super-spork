/*
** This function searches an array for a given value
** and returns the index of given value if present
*/

#include<iostream>

int search(int *arr, const int siz, int srhKey);

int main()
{
    const int size = 5;
    int array[] = {657,74639,7,45};
    int searchKey = 45;
    std::cout<<"Found at: "<<search(array, size, searchKey);
    return 0;
}

int search(int *arr, const int siz, int srhKey){
    for(int i=0; i < siz; i++){
        if(arr[i] == srhKey){
            // std::cout << arr[i] << "--" << srhKey << std::endl;
            return i;
        }
        else if( i == siz-1 && arr[i] != srhKey){
            return -1;
        }

    }
}
