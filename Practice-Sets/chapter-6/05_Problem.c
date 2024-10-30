#include <stdio.h>

int* sum(int x, int y){
    int s = x + y;
    int* ptr = &s;
    printf("The Sum of %d and %d is %d\n",x,y,s);
    return ptr;
}

float* average(int x, int y){
    float avg = (x+y)/2.0;
    float* ptr = &avg;
    printf("The average of %d and %d is %.2f\n", x,y,avg);
    return ptr;

}


int main(){
    
    int a = 1;
    int b = 3;

    int* sum_ptr = sum(a,b);
    float* avg_ptr = average(a,b);

    printf("The Address of Sum is %u\n", sum_ptr);
    printf("The Address of Average is %u\n", avg_ptr);



    return 0;
}