#include<stdio.h>

int main(){
    int arr[10];
    int index = 0;

    for (int i = 0; i < 10; i++)
    {
        arr[index++] = 5*(i+1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("5 x %d = %d\n",i+1,arr[i]);
    }
    
}