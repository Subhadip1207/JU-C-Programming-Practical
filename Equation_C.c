/*Cos(x)*/
#include<stdio.h>
#include<math.h>
    int find_factorial(int i){
    int sum=1;
    for(int j=1;j<=i;j++){
        sum*=j;
    }
    return sum;
}
float calculate_cos(float x){
    float sum=0;
    for(int i=0;i<=10;i++){
        sum+=(pow(-1,i)*(pow(x,(2*i))/(find_factorial((2*i)))));
    }
    return sum;
}
int main(){
    float x;
    printf("Enter the value of x: ");
    scanf("%f",&x);
    float result=calculate_cos(x);
    printf("Cos(%f)= %f",x,result);
    return 0;
}