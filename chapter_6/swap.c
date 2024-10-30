#include<stdio.h>

void swap(int* x, int* y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}


int main(){

    int a = 2 , b = 3;

    swap(&a,&b); 
    printf("The value of a is %d and value of b is %d",a,b);

    return 0;
}
