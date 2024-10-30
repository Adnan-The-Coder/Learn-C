#include <stdio.h>

int main(){

/// This is Pointer Arithmetic on integers and here it stores 4 bytes    
    int a = 5;
    int* a_ptr = &a;

    printf("\n\n\t\tPointers Arithmetic on integers");
    printf(" The address of a is %u\n", &a);
    printf(" The address of a is %u\n", a_ptr);
    a_ptr++;
    printf("The value of a_ptr is %u\n", a_ptr);



/// This is Pointer Arithemetic on Characters are here it stores 1 byte
    char b = 'A';
    char* b_ptr = &b;

    printf("\n\n\t\tPointers Arithmetic on Characters");
    printf(" The address of b is %u\n", &b);
    printf(" The address of b is %u\n", b_ptr);
    b_ptr++;
    printf("The value of b_ptr is %u\n", b_ptr);

    printf("\n\n\n");


    return 0;
}