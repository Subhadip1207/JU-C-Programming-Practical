/*Write a program (W.A.P.) to take one string then  print it in the reverse order and check whether the input string is Plindrome.*/
#include<stdio.h>
#include<string.h>
int main(){
    char a[20];
    char b[20];
    int l;
    printf("Enter a string : ");
    scanf("%s",&a);
    strcpy(b,a);
    strrev(a);
    printf("Reverse of the string is : %s\n",a);
    if(strcmp(a,b)==0){
        printf("%s  is palindrome.",b);
    }else{
        printf("%s is not palindrome.",b);
    }
    return 0;
}