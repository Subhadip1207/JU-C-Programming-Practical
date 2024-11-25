/*6. Write a program to compute GCD of two number.
 Implement the program using the Euclid Algorithm and the factorization method.*/
#include<stdio.h>
#include<math.h>

int gcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int gcd1(int a, int b) {
    int min=(a<b)?a:b;
    for(int i=min;i>0;i++){
        if(a%i==0 && b%i==0){
            return i;
        }
    }
}
int main(){
    printf("Enter a two number:\n");
    int a,b,ch;
    scanf("%d %d",&a,&b);
    printf("To use Euclid Algorithm press 1:\n");
    printf("To use Factorization Method press 2:\n");
    printf("Enter your choice:");
    scanf("%d",&ch);
    switch(ch){
        case 1:
        printf("Gcd Is :%d",gcd(a,b));
        break;
        case 2:
        printf("Gcd Is :%d",gcd1(a,b));
        break;
        default:
        printf("Invalid choice");
    }
    
    
}