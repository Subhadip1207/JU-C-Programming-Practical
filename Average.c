/*2. Write a program to find average of 3 integers. Input variables must be declared as the
integer variables.*/
#include<stdio.h>
int main(){
    int n1,n2,n3;
    printf("Enter first number: ");
    scanf("%d",&n1);
    printf("Enter second number: ");
    scanf("%d",&n2);
    printf("Enter third number: ");
    scanf("%d",&n3);
    float avg=(n1+n2+n3)/3.0;
    printf("The average is = %f",avg);
    return 0;
}