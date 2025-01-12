/*6. Write a function to read a matrix, transpose a matrix,
 multiply two matrices and use these functions in main() to check whether an input matrix is symmetric or not.*/
#include<stdio.h>
void symmetric(int *arr, int row, int col) {
    int i, j, flag = 0; 
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            if(*(arr + i * col + j) != *(arr + j * col + i)) {
                flag = 1;
                break;
            }
        }
        if(flag == 1) {
            break;
        }
    }
    if(flag == 1) {
        printf("Matrix is not symmetric\n");
    } else {
        printf("Matrix is symmetric\n");
    }
}

int main() {
    int row, col, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &col);
    if(row != col) {
        printf("Matrix is not square, so it cannot be symmetric.\n");
        return 0;
    }

    int a[row][col];
    printf("Enter elements in the matrix:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    symmetric(&a[0][0], row, col);

    return 0;
}