#include <iostream>

using namespace std;

int main(void){

    int a[] = {1,2,3,4,5,6};
    int sum[6] = {};
    
    for(int i=0; i<(sizeof(a)/sizeof(a[0])); i++){
        for(int j=1; j<(sizeof(a)/sizeof(a[0]));j++){
            sum[j] = a[i]+a[j];
            i++;
        }
    }
    
    for(int i=1; i<sizeof(sum)/sizeof(sum[0]); i++){
        cout << sum[i] << endl; 
    }
}
