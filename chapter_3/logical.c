#include <stdio.h>

int main(){
    int a=1; int b=1; int c=1;
    printf("The value of a and b is %d\n",a&&b); // && is the AND operator in C
    printf("The value of a and b is %d\n",a||b); // || is the OR operator in C
    printf("The value of not(a) is %d\n", !a);

    if (a && b){
        printf("Both a and b are resolved as true\n");
    }
    // is same as writing
    if (a){
        if (b){
            printf("Both a and b are resolved as true\n");
        }
    }
// Above Clarifies that nested if statements can be simplified using operators



/// This can also happen i.e and operator  checking a b c 
    if (a && b && c){
        printf("All are true\n");
    }

    return 0;
}