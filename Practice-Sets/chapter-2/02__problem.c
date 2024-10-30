#include <stdio.h>

int main(){
    int x = 2, y = 3, z = 3, k = 1;

    printf("The Value is %d", 3*x/y-z+k);
    // 3*x/y - z+k
    // 6/y - z+k
    // 2 - 3 + 1 // Left to right operation
    // -1 + 1
    // 0

    return 0;
}