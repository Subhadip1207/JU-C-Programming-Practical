/*Fibonacci series*/
#include<Stdio.h>
int main(){
    int n;
    printf("Enter the length greater than 0:" );
    scanf("%d",&n);
    if(n==0){
        return 0;
    }else if(n==1){
        printf("1");
    }
    else if(n==2){
        printf("2");
    }else{
        printf(" 1 1 ");
        int a=1,b=1,sum=0;
        for(int i=3;i<=n;i++){
            sum=a+b;
            printf("%d ",sum);
            a=b;
            b=sum;
        }
    }
    return 0;
}