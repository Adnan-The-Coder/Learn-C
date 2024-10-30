#include <stdio.h>

int main(){
    
    int i = 2;
    int* ptr = &i;
    printf("The Address of i is %u\n",&i);

    printf("The Address of i is %u\n", ptr);


    return 0;
}