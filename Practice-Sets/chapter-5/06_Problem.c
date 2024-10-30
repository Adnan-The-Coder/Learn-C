#include <stdio.h>


int Sum_Natural(int n){
    if (n == 1 ){
        return n = 1;
    }
    return Sum_Natural(n-1) + n;
}

int main(){
    
    int n = 10;
    printf("The Sum of first %d Natural Numbers is %d",n, Sum_Natural(n));

    return 0;
}