/*Write a program to find norm of matrix*/

//This is Frobenius Norm
#include<stdio.h>
#include<math.h>

int main(){
    int row,column,i,j,sum=0;
    float ans;
    int matrix [row][column];
    printf("Enter the no of rows in the matrix : ");
    scanf("%d",&row);
    printf("Enter the no of columns in the matrix : ");
    scanf("%d",&column);
    printf("Enter the elements in the matrix ...\n");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            scanf("%d",&matrix[row][column]);
            sum+=(matrix[row][column]*matrix[row][column]);
        }
    }
    ans=sqrt(sum);
    printf("The Frobenius form of matrix is : %f",ans);
    return 0;
}