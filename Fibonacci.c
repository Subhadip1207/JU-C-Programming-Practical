/*11. Write a program to generate the n-th Fibonacci number where n will be taken as input. There is a formula
for computing the n-th Fibonacci number:
n
n
1 1 + √5
1 1 − √5
F n =
(
) −
(
)
2
2
√5
√5
Compute n -th Fibonacci number without using the formula and using the formula, and compare these two. Are
they same?*/
#include <stdio.h>
#include <math.h>
void find_fibonacci_without_formula(int n){
    int a = 0, b = 1, c;
    if(n <1){
        printf("Invalid input. Please enter a positive integer from 1.\n");
    }else if(n==1){
        printf("0");
    }else if(n==2){
        printf("1");
    }
    else{
        for(int i=2; i<=n; i++){
            c = a + b;
            a = b;
            b = c;
            if(i==n){
                printf(" The %d th Fibonacci number without formula is : %d\n", n, c);
            }
        }
    }
}
void fibonacci_with_formula(int n){
    float root5=sqrt(5);
    float fib_n = (1/root5)*pow((1+root5)/2,n)-(1/root5)*pow((1-root5)/2,n);
    printf("The %d-th Fibonacci number using formula is: %f\n", n, fib_n);
}
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    find_fibonacci_without_formula(n);
    fibonacci_with_formula(n);
    return 0;
}