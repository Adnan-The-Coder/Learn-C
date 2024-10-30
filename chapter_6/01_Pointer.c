#include<stdio.h>

int main(){
    int i = 72;
    int* j = &i; // j is a pointer pointing towards i i.e stores its address
    printf("The address of i is %p\n", j );
    printf("The address of j is %p\n", &j);
    printf("The value of j is %p", *(&j)); // * denotes value and & denotes address
    
    return 0;
}