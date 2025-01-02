/*2. Write a only one function Vowel_Cons_Count() to count the number of vowels & consonants of a line of text.
 Do not print anything from inside the function. Write a program to read a line of text more than 80 characters terminated by "#" 
 and use Vowel_Cons_Count() in main() and print the number of vowels & consonants of a line of text.*/
#include <stdio.h>
#include <ctype.h>
void Vowel_Cons_Count(char str[], int *vowels, int *consonants) {
    int i = 0;
    while (str[i] != '\0') {
        char ch = tolower(str[i]);
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                (*vowels)++;
            } else {
                (*consonants)++;
            }
        }
        i++;
    }
}

int main() {
    char str[100];
    int vowels = 0, consonants = 0;
    printf("Enter a line : ");
    fgets(str, sizeof(str), stdin);
    Vowel_Cons_Count(str, &vowels, &consonants);
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}