/*13. Write a program to take a three digit number from the user to test whether the
sum of the first & last digits is equal to the twice of the middle element /digit.*/
#include<stdio.h>
int main(){
    int num,first,middle,last;
    printf("Enter a number: ");
    scanf("%d",&num);
    last=num%10;
    num/=10;
    middle=num%10;
    num/=10;
    first=num%10;
    num/=10;
    if((first+last)==(2*middle)){
        printf("yes");
    }else{
        printf("No");
    }
    return 0;
}
