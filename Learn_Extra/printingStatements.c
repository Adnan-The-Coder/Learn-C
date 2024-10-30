/*
In C, snprintf is a function used for formatting and writing a string to a character array. 
It works similarly to sprintf, but with an added safety feature: it limits the number of 
characters written to prevent buffer overflows.

Here's a breakdown of the parameters in your example:

person1.name: This is the destination buffer where the formatted string will be stored.
sizeof(person1.name): This specifies the maximum number of characters to write, including 
the null terminator. It ensures that you do not write more characters than the buffer can hold.
"Alice": This is the string to be formatted and written to the buffer.

*/


#include <stdio.h>

int main() {
    char buffer[100];
    int age = 30;
    char name[] = "John";
    sprintf(buffer, "%s is %d years old.", name, age+10);// stores the value in buffer and modifies
    printf("%s\n", buffer);// prints the buffer 
    return 0;
}