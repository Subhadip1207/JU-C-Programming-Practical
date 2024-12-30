/*Write a program (W.A.P.) to take one string then  print it in the reverse order and check whether the input string is Plindrome.*/
#include<stdio.h>
#include<string.h>
void usinglibrary(char a[],char b[]){
    strcpy(b,a);
    strrev(a);
    printf("Reverse of the string is :%s\n",a);
    if(strcmp(b,a)==0){
        printf("%s is palindrome",b);
    }else{
        printf("%s is not palindrome",b);
    }
}
void withoutlibrary(char a[],char b[]){
    int i,end=0,flag=0;
    char temp;
    while(a[end]!='\0'){
        end++;
    }
     for(i=0;i<end;i++){
        b[i]=a[i];
     }
    for(i=0;i<=end/2;i++){
        temp=a[i];
        a[i]=a[end-1-i];
        a[end-1-i]=temp;
    }
    printf("Reverse of the string is %s\n",a);
    for(i=0;a[i]!='\0'||b[i]!='\0';i++){
        if(a[i]!=b[i]){
            flag=1;
            break;
        }
    }
    if(flag){
         printf("%s is not palindrome",b);
    }else{
        printf("%s is palindrome",b);
    }
}
int main(){
    char a[20],b[20];
    int ch;
    printf("Enter a string : ");
    scanf("%s",&a);
    printf("TO use library function press 1\nWithout library function press 2.");
    printf("\nEnter your choice: ");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        usinglibrary(a,b);
        break;
    case 2:
        withoutlibrary(a,b);
        break;
    default:
        printf("Invalid choice");
        break;
    }
    return 0;
}