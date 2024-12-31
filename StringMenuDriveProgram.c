/*Write a menu driven program, consisting of following functions (on string),without using any library functions :--
Strlen()          
Strcpy()
Strcat()
Strrev()
Strcmp()
*/
#include<stdio.h>
int stringLength(char a[]){
    int i=0;
    while(a[i]!='\0'){
        i++;
    }
    return i;
}
void stringCopy(){
    int j,i;
    char a[30],b[30];
    printf("Enter a string : ");
    scanf("%s",&a);
    j=stringLength(a);
    for(i=0;i<j;i++){
        b[i]=a[i];
    }
    printf("Copy of %s is : %s",a,b);
}
void stringConcat(){
    int l1,l2,i;
    char a[30],b[30];
    printf("Enter first string : ");
    scanf("%s",&a);
    printf("Enter second string : ");
    scanf("%s",&b);
    l1 = stringLength(a);
    l2 = stringLength(b);
    for(i=0;i<l2;i++){
        a[l1+i] = b[i];
    }
    printf("After concatenation the final string is : %s",a);
}
void stringReverse(){
     int i,end;
     char a[30],b[30],temp;
    printf("Enter a string : ");
    scanf("%s",&a);
    end = stringLength(a);
    for(i=0;i<=end/2;i++){
        temp=a[i];
        a[i]=a[end-1-i];
        a[end-1-i]=temp;
    }
    printf("Reverse of the string is :  %s\n",a);
}
void stringCompare(){
    int i,flag;
    char a[30],b[30];
    printf("Enter first string : ");
    scanf("%s",&a);
    printf("Enter second string : ");
    scanf("%s",&b);
    for(i=0;a[i]!='\0'|| b[i]!='\0';i++){
        if(a[i] != b[i]){
            flag=1;
            break;
        }
    }
    if(flag == 1){
        printf("Two strings not are same..");
    }
    else{
        printf("Two strings are same..");
    }
}
int main(){
    int ch,i=0,j=0,l1,l2;
    char a[30],b[30];
    // printf("Enter a string : ");
    // scanf("%s",&a);
    printf("1.Determine String Length.\n2.Copy String\n3.Concatinate string.\n4.String Reverse.\n5.String Compare.\n");
    printf("Enter your choice : ");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        printf("Enter a string : ");
        scanf("%s",&a);
        printf("The length of %s is : %d",a,stringLength(a));
        break;
    case 2:
        stringCopy();
        break;
    case 3:
        stringConcat();
        break;
    case 4:
        stringReverse();
        break;
    case 5:
        stringCompare();
        break;
    default:
        printf("Invalid choice");
        break;
    }
    // printf(" The string is : %s",a);
    return 0;
}