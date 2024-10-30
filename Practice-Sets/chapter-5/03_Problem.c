#include <stdio.h>

float Force(float m){
    return m*9.8;
}

int main(){
    float m = 42;
    printf("The Force Exerted by the body of mass %.2f Kg is %.2f N",m,Force(m));
    return 0;
}