//10. Write a program to test whether any given year is a Leap year or not
#include<stdio.h>
int main(){
    int year;
    printf("Enter a year:");
    scanf("%d",&year);
    (year%100==0)?((year%400==0)? printf("%d is leapyear") : printf("%d is nonleapyear")):((year%4==0)? printf("%d is leapyear") : printf("%d is nonleapyear"));
    return 0;
}