// #include <stdio.h>

// int main(){

//     int a = 2 ;
//     a = 10*a;
//     printf("The Value of a is %d",a); 

//     return 0;
// }

#include <stdio.h>

int change(int*x){
    *x = 10*(*x);
}

int main(){

    int a = 2;

    printf("The Value of x is %d\n", a);
    change(&a);
    printf("The Value of x is %d\n", a);

    return 0;
}