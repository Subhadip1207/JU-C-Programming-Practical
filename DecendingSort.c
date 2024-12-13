/*1.Write a program to take an array of numbers and sort in descending order*/
#include<stdio.h>

void selectionSort(int arr[], int n){
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(j=0;j<n;j++){
        printf("%d ",arr[j]);
    }
}
int main(){
    int n ;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements in the array: ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Original array: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\nSorted array in descending order: ");
    selectionSort(arr,n);
    return 0;
}