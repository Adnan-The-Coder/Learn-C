#include <stdio.h>

int main(){
    char a = 'A';
    char* a_addr = &a;

    float b = 2472.242;
    float* b_addr = &b; // this should also be float or else error


    printf("The address of a is %p\n", a_addr);
    printf("The address of b is %p\n", b_addr);

    return 0;
}