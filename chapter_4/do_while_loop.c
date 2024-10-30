// Garbage value refers to  uninitialized or unpredictable value stored in variable in C

#include <stdio.h>

int main(){
    int i = 0;
    do
    {
        printf("The value of i is %d\n",i);
        i++;
    } while (i<4);
    
    return 0;
}