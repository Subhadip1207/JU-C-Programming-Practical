/*4. Write a program to swap odd positioned numbers with even positioned number in a
array*/
#include<stdio.h>
int main(){
     int n;
    printf("Enter the size of array in even number: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements in the array: ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n;){
        if(i%2==0){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
        i=i+2;
        }
    }
    printf("After swapping the array is:\n");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}