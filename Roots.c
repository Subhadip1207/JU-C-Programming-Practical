/*12. Write a program to calculate the real roots of any quadratic equation where a,
b, c (i.e. the co-efficients)will be taken as input by the user*/
#include<stdio.h>
#include<Math.h>
int main(){
    int a,b,c;
    float root1,root2;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    printf("Enter c: ");
    scanf("%d",&c);
    int margent=b*b-4*a*c;
    if(margent<0){
        printf("The equation has no real root");
    }else{
        root1=((-b+sqrt(margent))/2*a);
        root2=((-b-sqrt(margent))/2*a);
        printf("The root of the equation is:\n %f\n %f\n",root1,root2);
    }
    
    return 0;
}