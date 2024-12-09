/*13. Consider that M is a n x n square matrix whose each row contains real numbers or 0 such that sum of each
row is 1. If R is a n-dimensional column vector whose each component is 1/n. Use random number generator
to create the matrix M. Write a program to compute: R = (M p )R , where p should be taken as input.*/
#include<stdio.h>
#include<stdlib.h>

void createMatrix(double M[][10],int n){
    for(int i=0;i<n;i++){
        double sum=0;
        for(int j=0;j<n;j++){
            M[i][j]=(double)rand()/RAND_MAX;
            sum+=M[i][j];
        }
        for(int j=0;j<n;j++){
            M[i][j]/=sum;
        }
    }
}

void printmatrix(double M[][10],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%f ",M[i][j]);
        }
        printf("\n");
    }
}

void matrixMultiply(double A[][10],double B[][10],double C[][10],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            C[i][j]=0;
            for(int k=0;k<n;k++){
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
}


int main(){
    int n;
    printf("Enter the size of the matrix: ");
    scanf("%d",&n);
    double M[10][10];
    createMatrix(M,n);
    printf("Matrix M:\n");
    printmatrix(M,n);

    double R[10];
    for(int i=0;i<n;i++){
        R[i]=1.0/n;
    }

    int p;
    printf("Enter the value of p: ");
    scanf("%d",&p);

    double Mp[10][10];;
    matrixMultiply(M,M,Mp,n);
    for(int i=1;i<p-1;i++){
        double temp [10][10];
        matrixMultiply(Mp,M,temp,n);
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                Mp[j][k]=temp[j][k];
            }
        }
    }

    double result [10];
    for(int i=0;i<n;i++){
        result[i]=0;
        for(int j=0;j<n;j++){
            result[i]+=Mp[i][j]*R[j];
        }
    }
    printf("Result R = (Mp)^p * R:\n");
    for(int i=0;i<n;i++){
        printf("%f ",result[i]);
    }
    printf("\n");
    return 0;
}