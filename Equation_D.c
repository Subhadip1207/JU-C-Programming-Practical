/*Log(1+x)*/
#include<stdio.h>
#include<math.h>
float find_log(float x){
    float sum=0;
    for(int i=1; i<=10; i++){
        sum+=pow(-1,i+1)*(pow(x,i))/(i);
    }
    return sum;
}
int main(){
    float x;
    printf("Enter the value of x:");
    scanf("%f",&x);
    float result=find_log(x);
    printf("Log(1+%f) = %f",x,result);
    return 0;
}