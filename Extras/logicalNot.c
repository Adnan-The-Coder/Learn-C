#include <stdio.h>

int main(){
    int a =! 13; // Here 0 is stored in a 
    // Note that not equal to symbol is != not to be confused with =!
    // =! implies it assigns a logical not value 
    // Example here 13 is non zero so it assigns zero to a
    int b =! 0;
    // Here b has 1 value stored logical not of 0 

    printf("%d -> is a \n%d -> is b",a,b);
    return 0;
}