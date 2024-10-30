// // Matrix determinant Challenge to be solved 

// #include<stdio.h>



// void matrix_calculate(int n,int arr[n][n]){
//     int elements[n*n];
//     int index = 0; // index for holding elements

//     for (int i = 0; i < n; i++)
//     {
//         for (int  j = 0; j < n; j++)
//         {
//             elements[index++] = arr[i][j];
//         }
        
//     }

//     int add_arr[n];
//     int add_arr_index = 0;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (i==j){
//                 add_arr[add_arr_index++]=arr[i][j];
//             }
//         }
        
//     }
//  /* Diagonal elements added succesfully  Below is test*/
//     // for (int i = 0; i < n; i++)
//     // {
//     //     printf("Element Add_Arr %d\n",add_arr[i]);// I got Diagonal Elements with this
        
//     // }

// /* Alternate location type element*/ /* a12 a23 a31*/
//     int alt_arr[n];
//     int alt_arr_index = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if ( i==j-1 || i==j+2 ){
//                 alt_arr[alt_arr_index++]=arr[i][j];
//             }
//         }
        
//     }
//     // for (int i = 0; i < n; i++)
//     // {
//     //     printf("Element Alt_Arr %d\n",alt_arr[i]);// I got Alternate 1 Elements with this
        
//     // }

// /* Alternate 2 location type element*/ /* a12 a23 a31*/
//     int add_arr_3[n];
//     int add_arr_3_index = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if ( i==j-2 || i==j+1 ){
//                 add_arr_3[add_arr_3_index++]=arr[i][j];
//             }
//         }
        
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("Element Alt_Arr_2 %d\n",add_arr_3[i]);// I got Alternate 2 Elements with this
        
//     }
    


//     printf("function a retrieving elements\n");
//     printf("The Elements are\n");
//     for (int i = 0; i < n*n; i++)
//     {
//         printf("%d\n",elements[i]);
//     }
    
// }

// int main(){
//     int order;
//     printf("Enter the order of square matrix to be calculated:\n");
//     scanf("%d",&order);

//     int arr[order][order];
    
//     for (int i = 0; i < order; i++)
//     {
//         for (int j = 0; j < order; j++)
//         {
//             printf("Enter the (%d,%d) Element of matrix: ",i+1,j+1);
//             scanf("%d",&arr[i][j]);
//         }
        
//     }

//     printf("\nMatrix Entered is \n");
//     for (int i = 0; i < order; i++)
//     {
//         printf("|");
//         for (int j = 0; j < order; j++)
//         {
//             printf(" %d ",arr[i][j]);
//         }
//         printf("|\n");
//     }
    
//     printf("testing function\n");

//     matrix_calculate(order,arr);


//     return 0;
// }




#include <stdio.h>

int getMinor(int matrix[][10], int temp[][10], int row, int col, int n) {
    int i = 0, j = 0;
    for (int r = 0; r < n; r++) {
        if (r == row) continue;
        for (int c = 0; c < n; c++) {
            if (c == col) continue;
            temp[i][j++] = matrix[r][c];
            if (j == n - 1) {
                j = 0;
                i++;
            }
        }
    }
    return 0;
}

int determinant(int matrix[][10], int n) {
    if (n == 1) {
        return matrix[0][0];
    }
    if (n == 2) {
        return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
    }
    
    int temp[10][10];
    int det = 0;
    
    for (int c = 0; c < n; c++) {
        getMinor(matrix, temp, 0, c, n);
        int minorDet = determinant(temp, n - 1);
        if (c % 2 == 0) {
            det += matrix[0][c] * minorDet;
        } else {
            det -= matrix[0][c] * minorDet;
        }
    }
    return det;
}

int main() {
    int order;
    printf("Enter the order of square matrix (max 10):\n");
    scanf("%d", &order);

    if (order > 10) {
        printf("Matrix order exceeds the maximum limit of 10.\n");
        return 1;
    }

    int arr[10][10];
    
    for (int i = 0; i < order; i++) {
        for (int j = 0; j < order; j++) {
            printf("Enter the (%d,%d) Element of matrix: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nMatrix Entered is \n");
    for (int i = 0; i < order; i++) {
        printf("|");
        for (int j = 0; j < order; j++) {
            printf(" %d ", arr[i][j]);
        }
        printf("|\n");
    }
    
    int result = determinant(arr, order);
    printf("The determinant of the matrix is: %d\n", result);

    return 0;
}
