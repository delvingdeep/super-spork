#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function
    int ta=0, tb=0;     //temp varibales for holding a and b

    ta = *a;
    tb = *b;
    //for sum:
    *a = ta + tb;

    //for difference:
    if(ta > tb){
        *b = ta - tb;
    }
    else{
        *b = tb - ta;
    }
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
