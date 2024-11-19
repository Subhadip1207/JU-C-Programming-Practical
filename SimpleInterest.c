/*11. Write a program to Calculate simple interest given principal (p), rate of interest
per annum (r), number of years(n) and consider all the relevant cases.*/
#include<stdio.h>
int main(){
    float p,r,n,i;
    printf("Enter principle amount: ");
    scanf("%f",&p);
    printf("Enter rate of interest per annum: ");
    scanf("%f",&r);
    printf("Enter number of years: ");
    scanf("%f",&n);
    printf("\nInterest is = %f",((p*r*n)/100));
    return 0;
}