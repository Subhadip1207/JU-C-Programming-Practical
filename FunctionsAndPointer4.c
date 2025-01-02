/*4.Write a function to take a line of text then convert all the alphabets of it to uppercase.*/
#include<stdio.h>
int main(){
    char str[100];
    int i;
    printf("Enter a string : ");
    fgets(str,sizeof(str),stdin);
   for(i=0;str[i]!='\0';i++){
    if(str[i]>='a' && str[i]<='z'){
        str[i]-=32;
    }
   } 
   printf("Uppercase is : %s",str);
    return 0;
}