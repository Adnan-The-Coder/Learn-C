#include <stdio.h>

int main(){
    int a = 10;
    if (a = 11)
        printf("I am 11"); // Output is I'm 11 bcz a = 11 is assingment operation
        // If a == 11 is used then it checks whether a is equal to 11 or not if not else statement is printed
    else
        printf("I am not 11");
    return 0;
}