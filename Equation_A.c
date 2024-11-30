/*A. 1/1!+2/2!+3/3!+…..upto 10 terms*/
#include<stdio.h>
float factorial(int n){
    float ans=1;
    for(int i=1;i<=n;i++){
        ans=ans*i;
    }
    return ans;
}
float term(int n){
    return n/factorial(n);
}
int main(){
    float product=1;
    for(int i=1;i<=10;i++){
        product=product+term(i);
    }
    printf("The answer is=%f",product);
    return 0;
}