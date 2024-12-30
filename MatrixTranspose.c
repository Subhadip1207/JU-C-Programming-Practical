/*11.	Write a program to find transpose of matrix	  */
#include<stdio.h>
int main(){
    int row,column,i,j;
    int matrix [row][column];
    printf("Enter the no of rows in the matrix : ");
    scanf("%d",&row);
    printf("Enter the no of columns in the matrix : ");
    scanf("%d",&column);
    printf("Enter the elements in the matrix ...\n");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("Transpose of the matrix is : ")
    for(i=0;i<column;i++){
        for(j=0;j<row;j++){
            printf("%d\t",matrix[j][i]);
        }
        printf("\n");
    }
    return 0;
}