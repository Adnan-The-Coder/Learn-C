// Keywords in C language

/*  AUTO Keyword
In C, the `auto` keyword is used to specify that a variable has automatic storage duration. 
However, this is the default storage class for local variables, so you usually don’t need to explicitly declare variables 
with `auto`. 

When you declare a variable inside a function without specifying any storage class, it is automatically treated as `auto`. 
Here's an example:

In modern C programming, the `auto` keyword is rarely used, since it's redundant. Its primary use today is in the 
context of type inference in C++ (though that's a different language). In C, it mainly serves as a reminder of the
automatic storage duration concept, but you can safely omit it.
*/

#include <stdio.h>


void myFunction() {
    auto int x = 5; // This is equivalent to just 'int x = 5;'
}

int main(){
    
    return 0;
}