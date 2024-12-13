/*6. Write the number of vowels & consonants of any entered line of any input string.*/
#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    int vowels=0, consonants=0;
    printf("Enter a string: ");
    scanf("%s", str);
    for(int i=0; str[i]!='\0'; i++){
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||
               str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
                vowels++;
            } else {
                consonants++;
            }
        }
    }
    printf("%s has %d vowels\n",str,vowels);
    printf("%s has %d consonants",str,consonants);
    return 0;
}