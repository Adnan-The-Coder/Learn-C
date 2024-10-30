#include <stdio.h>

int main(){
    int num1=1; int num2=2; int num3=3; int num4=4;

    if (num1>num2 && num1>num3 && num1>num4){
        printf("The greatest Number is %d",num1);
    }
    else if (num2>num1 && num2>num3 && num2>num4){
        printf("The greatest Number is %d",num2);
    }
    else if (num3>num1 && num3>num2 && num3>num4){
        printf("The greatest Number is %d",num3);
    }
    else{
        printf("The Greatest Number is %d",num4);
    }

    return 0;
}