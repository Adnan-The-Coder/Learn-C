#include <stdio.h>

int sum(int* a, int* b){
    *a = 6; // this changed the value of a as input 
    return (*a + *b);
}


int main(){
    int x = 2, y = 3;

    printf("The sum of x and y is %d\n", sum(&x,&y));
    printf("The value of x is %d\n", x);

    return 0;
}