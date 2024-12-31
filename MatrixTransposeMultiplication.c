/*Write a program to take one 2-D array, find the transpose of  it, finally print the multiplied value of the matrix with its transpose.*/
#include<stdio.h>
int main(){
    int row,column,i,j;
   
    printf("Enter the rows of the matrix : ");
    scanf("%d",&row);
    printf("Enter the columns of the matrix : ");
    scanf("%d",&column);
    int a[row][column],b[column][row];
    printf("Enter the elements in the matrix ...\n");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            b[j][i] = a[i][j];
        }
    }
    printf("Transpose of the matrix is ...\n");
    for(i=0;i<column;i++){
        for(j=0;j<row;j++){
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}