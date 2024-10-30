#include<stdio.h>

int main(){

    int arr[3][2] = {{2,3}, // 3 rows 2 colums array
                     {4,5},
                     {5,6}};

    int arr_inp[3][2];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {   
            printf("Enter the array element (%d,%d):",i,j);
            scanf("%d", &arr_inp[i][j]);
            printf("\n");
        }
        
    }
    for (int i = 0; i < 3; i++)
    {   
        printf("|");
        for (int j = 0; j < 2; j++)
        {   
            printf(" %d ",arr_inp[i][j]);
        }
        printf("|\n");
    }
    
    return 0;
    
}