/*10.Write  a function to convert a decimal number to any other base given by the user.*/
#include<stdio.h>
#include<math.h>
void conversion(int n,int b){
    int count = -1,sum =0,rem;
    while(n>0){
        rem = n % b;
        count++;
        sum+=rem*pow(10,count);
        n/=b;
    }
    printf("The answer is = %d",sum);
}
int main(){
    int n,b;
    printf("Enter a nuber: ");
    scanf("%d",&n);
    printf("Enter the base where you want to change: ");
    scanf("%d",&b);
    conversion(n,b);
    return 0;
}