/*7. Write a program to swap the values of two variables
(i) Case 1:-- using third variable
(ii) Case 2:-- without using any third variable*/
#include<stdio.h>
int main(){
    int ch, n1,n2,c;
    printf("Enter first number:");
    scanf("%d",&n1);
    printf("Enter second number:");
    scanf("%d",&n2);
    printf("TO swap using Third variable press 1:\n");
    printf("TO swap  without using Third variable press 2:\n");
    scanf("%d",&ch);
    printf("Before swapping:\n First=%d\n Second=%d\n",n1,n2);
    switch (ch)
    {
    case 1:
    c=n2;
    n2=n1;
    n1=c;
    printf("After swapping:\n First=%d\n Second=%d",n1,n2);
        break;
    case 2:
    n2=n1+n2;
    n1=n2-n1;
    n2=n2-n1;
    printf("After swapping:\n First=%d\n Second=%d",n1,n2);
    break;
    default:
    printf("Invalid choice");
        break;
    }
    return 0;
}