#include<stdio.h>
int fibonacci(int n){
    if(n<=0){
        return 0;
    }else if(n == 1){
        return 1;
    }else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
int gcd(int a,int b){
    if(b == 0){
        return a;
    }
    return gcd(b,a%b);
}
int factorial(int n){
    if(n == 0){
        return 1;
    }
    return n * factorial(n-1);
}
int reverse(int n,int reversed){
    if(n == 0){
        return reversed;
    }
    return reverse(n/10,reversed*10+n%10);
}
int sumOfDigits(int n){
    if(n == 0){
        return 0;
    }
    return n%10 + sumOfDigits(n/10);
}
void divisors(int n,int i){
    if(i>n){
        return;
    }
    if(n%i == 0){
        printf("%d ",i);
    }
    divisors(n,i+1);
}
int main(){
    int ch,n,a,b;
    printf("1.Generate Fibonacci Series\n2.Gcd of two numbers.\n3.Factorial of any number.\n4.Reverse of any number.\n5.Sum of digits of any nnumber.\n6.Divisor of any given number.\n");
    printf("Enter your choice: ");
    scanf("%d",&ch);
    switch(ch){
        case 1:
        printf("Enter a number : ");
        scanf("%d",&n);
        printf("The n th fibonacci number is %d ",fibonacci(n));
        break;
        case 2:
        printf("Enter first number : ");
        scanf("%d",&a);
        printf("Enter second number : ");
        scanf("%d",&b);
        printf("gcd is %d",gcd(a,b));
        break;
        case 3:
        printf("Enter a number : ");
        scanf("%d",&n);
        printf("The facorial is : %d",factorial(n));
        break;
        case 4:
        printf("Enter a number : ");
        scanf("%d",&n);
        printf("Reverse is :%d",reverse(n,0));
        break;
        case 5:
        printf("Enter a number : ");
        scanf("%d",&n);
        printf("Sum of digits is : %d",sumOfDigits(n));
        break;
        case 6:
        printf("Enter a number : ");
        scanf("%d",&n);
        divisors(n,1);
        break;
        default:
        printf("Invalid choice.");
        break;
    }
    return 0;
}