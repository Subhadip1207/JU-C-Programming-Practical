/*11. Write a program to find average and median of a list of numbers. Use dynamic memory allocation for storing the numbers.*/
#include<stdio.h>
#include<stdlib.h>
void average(int a[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    printf("Average  of the list is %f\n",(float)sum/n);
}
void median(int a[],int n){
    for(int i = 0; i <n-1; i++) {
        for (int j = 0; j <n-i-1 ; j++) {
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    if (n % 2 != 0) {
        printf("Median is: %d\n", a[n / 2]);
    } else {
        printf("Median is: %.2f\n", (a[(n - 1) / 2] + a[n / 2]) / 2.0);
    }
}
int main(){
    int n;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    int *arr = (int*) malloc(n*sizeof(int));
    printf("Enter the numbers....\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    average(arr,n);
    median(arr,n);
    free(arr);
    return 0;
}