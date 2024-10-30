#include <stdio.h>

float C2f(float c){
    return ((9*c)/5) + 32;
}

int main(){
    float c = 45;
    printf("%f Degree Celicius to Fahrenhiet is %.2f",c,C2f(c));
    return 0;
}