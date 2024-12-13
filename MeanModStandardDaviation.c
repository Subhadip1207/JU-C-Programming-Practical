/*Write a program to find mean, mode and standard deviations of a list of numbers.*/
#include <stdio.h>
#include <math.h>
void mode(int arr[],int n){
    int count[100]={0};
    int max=arr[0];
    for(int i=0;i<n;i++){
        count[arr[i]]++;
        if(arr[i]>max)
            max=arr[i];
    }
    int mode_count=0, mode;
    for(int i=0;i<=max;i++){
        if(count[i]>mode_count){
            mode_count=count[i];
            mode=i;
        }
    }
    printf("Mode=%d",mode);
}
float mean(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    float mean =sum/n;
    
}

void standardDeviation(int arr[],float mean_value,int n){
    float sum=0;
    for(int i=0;i<n;i++){
        sum+=(arr[i]-mean_value)*(arr[i]-mean_value);
    }
    float variance = sum/n;
    float standard_deviation = sqrt(variance);
    printf("Standard Deviation=%f",standard_deviation);
}
int main(){
     int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements in the array: ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    mode(arr,n);
    printf("\n");
    float mean_value = mean(arr,n);
    printf("Mean=%f",mean_value);
    printf("\n");
    standardDeviation(arr,mean_value,n);
    return 0;
}