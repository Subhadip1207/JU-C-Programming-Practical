/*B. Sine(x)*/
#include<stdio.h>
#include<math.h>
double sineCalculation(double x,double t){
    double term=x;
    double sum=term;
    int n=1;
    while(fabs(term)>t){
        n=n+2;
        term*=-x*x/(n*(n-1));
        sum+=term;
    }
    return sum;
}
int main(){
    double x,t;
    printf("Enter th value of x:");
    scanf("%lf",&x);
    printf("Enter the termination condition:");
    scanf("%lf",&t);
    double result=sineCalculation(x,t);
    printf("sine(%lf) = %lf",x,result);
    return 0;
}