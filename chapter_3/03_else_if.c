#include <stdio.h>

int main(){
    int age = 65;
    if (age>60){ // If this (if) is resolved true the C will ignore rest of the statements till else
                // i.e else if statement and else statement are not checked 
        printf("You can drive and you are a senior citizen");
    }    
    else if (age>18){
        printf("You can drive");
    }
    else {
        printf("You cannot drive");
    }
    return 0;
}