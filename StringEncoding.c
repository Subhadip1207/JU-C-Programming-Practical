/*17.	Write a program to input a line from keyboard then encode it to its next alphabet or digits, then print the newly generated line
e.g. Input :--   today is 27 of September  Output:-- upebz jt 38 pg tfqufnafs	 	 
*/
#include <stdio.h>

int main() {
    char input[1000]; 
    int i = 0;
    printf("Enter a line: ");
    fgets(input, sizeof(input), stdin);
    while (input[i] != '\0') {
        if (input[i] >= 'a' && input[i] <= 'z') {
            if (input[i] == 'z') {
                input[i] = 'a'; 
            } else {
                input[i] = input[i] + 1; 
            }
        }
        else if (input[i] >= 'A' && input[i] <= 'Z') {
            if (input[i] == 'Z') {
                input[i] = 'A'; 
            } else {
                input[i] = input[i] + 1;
            }
        }
        else if (input[i] >= '0' && input[i] <= '9') {
            if (input[i] == '9') {
                input[i] = '0';
            } else {
                input[i] = input[i] + 1;
            }
        }

        i++;
    }
    printf("Encoded string: %s", input);

    return 0;
}