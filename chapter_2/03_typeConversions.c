#include <stdio.h>
/*
Type Casting 

int and int operation is int
float and int operation is float
float and flaot and float oprtation is float 

*/


int main(){
    int a = 9;
    int b = 2;
    float c = a/b;
    printf("Error: The value of a/b is %f\n\n",c);// This will Give 4 instead of 4.5 
    // to rectify this problem 
    float A = 9.0;
    int B = 2;
    float C = A/B;
    printf("Rectified: The value of a/b is %f",C);// This will Give 4 instead of 4.5 

    // Demotion and promotion
    // int k = 9.4 then k is stored as 9 
    // float s = 32 then s promoted and is stored as 32.0

    /*
    Operator Precedence -> Happens when no parenthesis 
    //                   * / %
                           +-
                           =
    */
   /*
   Operator Associativity
                            x*y/z -> evaluated from left to right
   
   */

    return 0;
}