/*3. Write a program to find the largest of three numbers using fourth variable.*/
#include<stdio.h>
int main(){
    int n1,n2,n3;
    printf("Enter first number: ");
    scanf("%d",&n1);
    printf("Enter second number: ");
    scanf("%d",&n2);
    printf("Enter third number: ");
    scanf("%d",&n3);
    int lar=(n1>n2)?((n1>n3)?n1:n3):((n2>n3)?n2:n3);
    printf("Largest number is : %d",lar);
    return 0;
}