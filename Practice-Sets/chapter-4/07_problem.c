// This program finds the factorial of a number

#include <stdio.h>

int main(){
    int product = 1;
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        product *= i;
    }
    printf("The Factorial of %d is %d",n,product);

    return 0;
}