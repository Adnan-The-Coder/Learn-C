// https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html
// Get the ASCII Values of different elements with above link


#include <stdio.h>

int main(){
    char ch = 'a';
    printf("The Character is %c",ch);
    printf("The Value of character is %d\n", ch); // This gives the ascii value of a(lowercase) i.e 97 and that of z(lowercase) is 122
    if (ch>=97 && ch<=122){
        printf('This Character is lowercase\n');
    }
    else{
        printf('This character is not lowercase\n');
    }
    return 0;
}