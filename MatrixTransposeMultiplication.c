/*Write a program to take one 2-D array, find the transpose of  it, finally print the multiplied value of the matrix with its transpose.*/
#include<stdio.h>
int main(){
    int row,column,i,j,k;
   
    printf("Enter the rows of the matrix : ");
    scanf("%d",&row);
    printf("Enter the columns of the matrix : ");
    scanf("%d",&column);
    int a[row][column],b[column][row],c[row][row];
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
    for(i=0;i<row;i++){
        for(j=0;j<row;j++){
            c[i][j]=0;
            for(k=0;k<column;k++){
                c[i][j] += a[i][k]*b[k][j];
            }
        }
    }
    printf("Matrix Multiplication is : \n");
    for(i=0;i<row;i++){
        for(j=0;j<row;j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}