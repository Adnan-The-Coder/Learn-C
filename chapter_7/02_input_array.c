#include <stdio.h>

int main() {
    int marks[5];

    // Loop to get input for each student
    for (int i = 0; i < 5; i++) {
        printf("Enter the marks of student %d: \n", i + 1);
        scanf("%d", &marks[i]);
    }
    
    // Loop to print the marks of each student
    for (int i = 0; i < 5; i++) {
        printf("Marks of student %d entered are %d\n", i + 1, marks[i]);
    }
    
    return 0;
}
