/*1. Write a program to use sizeof operator to check the sizes (in bytes) of the different
datatypes.*/
#include<stdio.h>
int main(){
    printf("The size of char is=%d",sizeof(char));
    printf("The size of integer is=%d",sizeof(int));
    printf("The size of float is=%d",sizeof(float));
    printf("The size of double is=%d",sizeof(double));
    return 0;
}