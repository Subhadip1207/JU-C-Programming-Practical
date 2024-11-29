/*10. Write a program to find the reverse of any number & check whether the number is a palindrome or not*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter the elemet:");
    scanf("%d",&n);
    int sum=0;
    int n1=n;
    while(n1>0){
        int rem=n1%10;
        sum=sum*10+rem;
        n1/=10;
    }
    printf("The reverse of %d is %d\n",n,sum);
    if(sum==n){
        printf("The number %d is palindrome",n);
    }else{
        printf("The number %d is not palindrome",n);
    }
    return 0;
}