#include<stdio.h>

int main(){
    int num[10] = {1,2,4,2,3,4,4,5,4,6,6};

    int* ptr = &num[0]; 
    // int* ptr = &num;

    ptr++;
    ptr++;
    if (num[2] == *ptr){
        printf("Yay! True")
    }

    return 0;
}