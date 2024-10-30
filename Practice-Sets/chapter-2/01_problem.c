#include <stdio.h>

int main(){
    int a = 352351;
    int b = 97*23;

    if (a%97 == 0){
        printf("%d is Divisible by 97",a);
    };
    if (b%97 == 0){
        printf("%d is Divisible by 97",b);
    };

    return 0;
}