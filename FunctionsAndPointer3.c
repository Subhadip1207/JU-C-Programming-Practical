/*3. Write a function to take one string then  print it in the reverse order. Write a recursive and non-recursive versions both.*/
#include <stdio.h>
#include <string.h>
void print_reverse_non_recursive(char str[]) {
    int i,end=0;
    char temp;
    while(str[end]!='\0'){
        end++;
    }
    for(i=0;i<=end/2;i++){
        temp=str[i];
        str[i]=str[end-1-i];
        str[end-1-i]=temp;
    }
    printf("%s\n",str);
}
void print_reverse_recursive(char str[], int index) {
    if (str[index] == '\0') {
        return;
    }
    print_reverse_recursive(str, index + 1);
    printf("%c", str[index]);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
     printf("Reverse using recursive function: ");
    print_reverse_recursive(str, 0);
    printf("\nReverse using Non-recursive function: ");
    print_reverse_non_recursive(str);

    return 0;
}