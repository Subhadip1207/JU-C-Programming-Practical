/*14. Write a program to convert any centigrade temperature value to farenheit and
vice versa.*/
#include<stdio.h>
int main(){
    int ch;
    float f,c;
    printf("TO change centigrade to farenheit press 1:\n");
    printf("TO change farenheit to centigrade press 2:\n");
    printf("Enter your choice: ");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
    printf("Enter your centigrade temperature: ");
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("Your farenheit temperature is = %f",f);
        break;
    case 2:
    printf("Enter your farenheit temperature: ");
    scanf("%f",&f);
    c=(f-32)/9*5;
    printf("Your centigrade temperature is = %f",c);
    break;
    default:
    printf("Invalid choice");
        break;
    }
    return 0;
}