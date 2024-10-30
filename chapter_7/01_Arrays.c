#include <stdio.h>

int main(){
    int marks[90]; // marks integer can store 90 integers

    marks[0] = 99;
    marks[1] = 89;

    marks[89]= 70; // marks[90] canot be used 

    printf("The marks are %d and %d and %d", marks[0],marks[1],marks[89]);


    return 0;
}