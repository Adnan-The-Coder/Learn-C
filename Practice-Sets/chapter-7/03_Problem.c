#include<stdio.h>

int main(){
    int print_upto;
    int num;
    printf("Enter Number you want for multplication table: ");
    scanf("%d",&num);

    printf("Enter Number until you want (Like 10): ");
    scanf("%d",&print_upto);
    
    int element[print_upto];
    int index = 0;

    for (int i = 0; i < print_upto; i++)
    {
        element[index++] = num*(i+1);
    }
     
    for (int i = 0; i < print_upto; i++)
    {
        printf("%d  x  %d = %d\n",num,i+1,element[i]);
    }
    



    return 0;
}