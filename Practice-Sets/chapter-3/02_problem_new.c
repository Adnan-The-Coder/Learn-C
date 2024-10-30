#include<stdio.h>

int main(){
    int marks1, marks2, marks3;
    printf("Enter Marks 1: \n");
    scanf("%d",marks1);
    printf("Enter Marks 2: \n");
    scanf("%d",marks2);
    printf("Enter Marks 3: \n");
    scanf("%d",marks3);
    printf("The Marks are %d %d %d", marks1,marks2,marks3);

    if (marks1 < 33 || marks2<33 || marks3<33){
        printf("You are failed due to less marks in individual subject(s)");
    }
    else if((marks1+marks2+marks3)/3 < 40){
        printf("You are failed due to less percentage");
    }
    else{
        printf("You are Passed");
    }

    return 0;
}