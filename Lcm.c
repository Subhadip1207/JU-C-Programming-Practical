/*7. Write a program to compute LCM of n integers*/
#include<stdio.h>
int gcd1(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm1(int a,int b){
    int ans=(a*b)/gcd1(a,b);
    return ans;
}
int main(){
    int n,i,j;
   
    printf("Enter the number of elements:");
    scanf("%d",&n);
     int array[n];
    printf("Enter %d elememts in the array:\n",n);
    for(i=0;i<n;i++){
        printf("Element %d: ",i+1);
        scanf("%d",&array[i]);
    }
    int lcm=array[0];
    for(j=1;j<n;j++){

        lcm=lcm1(lcm,array[j]);
    }
    printf("Lcm is = %d",lcm);
    return 0;
}