/*

In C, passing values by reference is typically done using pointers. When you pass a variable by reference, you actually pass a pointer to that variable. This allows the function to modify the original value directly.

Here's a simple example that demonstrates how to pass a value by reference to a function in C:

Example: Swapping Two Integers
This example shows how to swap two integers using pointers, which is a common way to illustrate passing by reference in C.

*/

#include <stdio.h>

// Function prototype
void swap(int *a, int *b);

int main() {
    int x = 5;
    int y = 10;

    printf("Before swap: x = %d, y = %d\n", x, y);

    // Call the swap function and pass the addresses of x and y
    swap(&x, &y);

    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;
}

// Function definition
void swap(int *a, int *b) {
    int temp;

    temp = *a; // Dereference a to get the value of x
    *a = *b;   // Dereference b to get the value of y and assign it to x
    *b = temp; // Assign the value stored in temp to y
}


/*

Explanation:
Function Definition (swap):

void swap(int *a, int *b) defines a function that takes two pointers to int as parameters.
Inside the function, *a and *b are used to access and modify the values pointed to by a and b.
Function Call (swap(&x, &y)):

In the main function, &x and &y are passed to swap. These are the addresses of x and y, which are pointers to the original variables.
Swapping Logic:

The function uses a temporary variable temp to help swap the values.
temp stores the value pointed to by a, then the value pointed to by b is assigned to the location pointed to by a, and finally, temp is assigned to the location pointed to by b.
By using pointers, the function swap directly modifies the values of x and y in the main function, demonstrating how passing by reference works in C.




Don't share sensitive info. Chats may


*/