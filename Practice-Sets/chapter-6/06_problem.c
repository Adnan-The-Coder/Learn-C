#include <stdio.h>

int main(){
    
    int i = 1;
    int* j = &i;

    printf("The Value of is %d\n", i);
    printf("The Value of is %d\n", *(&i));
    printf("The Value of is %d\n", *j);


    return 0;
}