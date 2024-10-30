// This program calculates the area of the rectangle

#include<stdio.h>

int main(){
    int num1;
    int num2;

    printf("Enter Length(in cms): ");
    scanf("%d",&num1);
    printf("\nEnter Breadth(in cms): ");
    scanf("%d",&num2);

    printf("\nThe Area of the rectangle with Given inputs is: %d", num1*num2);

    return 0;
}

// #include<stdio.h>

// int main(){
//     // int length = 13;
//     // int breadth = 13;

//     int length, breadth;

//     printf("Enter Length: ");
//     scanf("%d",&length);

//     printf("Enter Breadth: ");
//     scanf("%d",&breadth);

//     printf("The Area of the rectangle is %d", length*breadth);
//     return 0;
// }