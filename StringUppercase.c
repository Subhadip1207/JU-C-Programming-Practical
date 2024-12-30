/*Write a program to take a line of text then convert all the alphabets of it to uppercase.*/
#include<stdio.h>
#include<string.h>
void usinglibrary(char a[]){
    char b[20];
    strupr(a);
    printf("Uppercase is : %s",a);
}
void withoutlibrary(char a[]){
    int i;
   for(i=0;a[i]!='\0';i++){
    if(a[i]>='a' && a[i]<='z'){
        a[i]-=32;
    }
   } 
   printf("Uppercase is : %s",a);
}
int main(){
    char a[20];
    int ch;
    printf("Enter a string : ");
    scanf("%s",&a);
    printf("TO use library function press 1\nWithout library function press 2.");
    printf("\nEnter your choice: ");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        usinglibrary(a);
        break;
    case 2:
        withoutlibrary(a);
        break;
    default:
        printf("Invalid choice");
        break;
    }
    return 0;
}