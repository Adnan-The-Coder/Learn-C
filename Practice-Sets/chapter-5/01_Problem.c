#include <stdio.h>


float average(int a,int b, int c){
    return ((a+b+c)/3.0);
}

int main(){

    int num1 = 14; 
    int num2 = 12; 
    int num3 = 11; 
    printf("The Average of the numbers %d,%d,%d is %.2f",num1,num2,num3,average(num1,num2,num3));

    return 0;
}