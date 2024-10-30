// This program converts celcius to fahrenhiet
// Formula used is F = 9/5(C) + 32

#include <stdio.h>

int main(){
    float c = 37,f;

    f = (9.0/5.0)*c + 32; // Here 9/5 is evaluated as integer therefore wrong answer is obtained so 9.0/5.0 is used

    printf("The Value in fahrenhiet is %f",f);

    return 0;
}