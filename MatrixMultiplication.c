/*Write a program to multiply two n x n matrices.*/
#include<stdio.h>
int main(){
    int n,i,j,k;
   
    printf("Enter the dimension of the array : ");
    scanf("%d",&n);
     int a[n][n],b[n][n],c[n][n];
    printf("Enter the values in the first matrix...\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the values in the second matrix...\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            c[i][j]=0;
            for(k=0;k<n;k++){
                c[i][j] += a[i][k]*b[k][j];
            }
        }
    }
    printf("Matrix Multiplication is : \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}