/*18.	Write a program to convert the capital letters of any string to small letter and vice-versa, finally print the changed string.	 	 */
#include<stdio.h>
int main(){
    int ch ,i;
    char a[20];
    printf("1.UpperCase\n2.Lowercase\n");
    printf("Enter your choice : ");
    scanf("%d",&ch);
    printf("Enter your string : ");
    scanf("%s",&a);
    switch (ch)
    {
    case 1:
        for(i=0;a[i]!='\0';i++){
        if(a[i]>='a' && a[i]<='z'){
                a[i]-=32;
            }
        } 
        printf("Uppercase is : %s",a);
        break;
    case 2:
        for(i=0;a[i]!='\0';i++){
        if(a[i]>='A' && a[i]<='Z')
            {
                a[i]+=32;
            }
        } 
        printf("Lowercase is : %s",a);
        break;
    default:
    printf("Invalid Choice");
        break;
    }
    return 0;
}