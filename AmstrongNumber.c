/*Amstrong number : 153=1^3+5^3+3^3*/
#include<stdio.h>
#include<Math.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int n1=n;
    int sum=0;
    while(n1>0){
        int rem=n1%10;
        sum+=(rem*rem*rem);
        n1/=10;
    }
    if(sum==n){
        printf("%d is a amstrong number",n);
    }else{
        printf("%d is not a amstrong number",n);
    }
    return 0;
}