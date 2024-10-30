#include <stdio.h>

int main(){
    int i = 5;
    printf("The value of i is %d\n",i);
    i++;
    printf("The value of i is %d\n",i);

    // i++ prints first and then increments whereas
    // ++i first increments then prints

    // i++ (Post increment operator)


    i += 2;
    printf("The Value of i is %d\n",i); // 8
    i =+ 2; // + acts as unary operator and i is assigned 2
    printf("The Value of i is %d\n",i); // 2 

    return 0;
}