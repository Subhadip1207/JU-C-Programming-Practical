/*5. Write a program to print value of z where
i. a=5, b=6, z= a++ + b++
ii. a=5, b=6, z= a++ + --b
iii. a=5, z= a++ + ++a*/
#include<stdio.h>
int main(){
    //case 1
    int a=5,b=6;
    int z= a++ + b++;
    printf("%d\n",z);
    //case 2
    a=5,b=6;
    z= a++ + --b;
    printf("%d\n",z);
    //case 3
    a=5;
    z= a++ + ++a;
    printf("%d\n",z);
    return 0;
}