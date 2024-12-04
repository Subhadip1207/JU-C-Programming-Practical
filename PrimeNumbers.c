/*9. W.A.P. to print all prime numbers between 1 and n. (n will be given as input).*/
#include<stdio.h>
#include<stdbool.h>
bool isPrime(int i){
    if(i<=1){
        return false;
    }
    else{
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                return false;
            }
        }
    }
    return true;
}
void print_prime(int n){
    for(int i=2;i<=n;i++){
        if(isPrime(i)){
            printf("%d ",i);
        }
    }
}
int main(){
    int n;
    printf("Enter the range:");
    scanf("%d",&n);
    printf("The prime numbers between 1 and %d will be : ",n);
    print_prime(n);
    return 0;
}