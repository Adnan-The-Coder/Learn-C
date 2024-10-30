// Fibonacii series is 0,1,1,2,3,5,8,13,21,34

#include <stdio.h>

int Fibonacci(int n){
    // Fibonacci(n) = Fibonacci(n-1) + Fibonacci(n-2)
    if (n == 1 || n == 2){
        return n-1;
    }
    return Fibonacci(n-1) + Fibonacci(n-2);
}

int main(){
    int n = 6;
    printf("The %d Element of Fibonacci Series is %d",n,Fibonacci(n));
    
    return 0;
}