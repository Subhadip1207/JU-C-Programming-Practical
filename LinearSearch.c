/*5.Write a program to search an element in the array. If it is found, print index else print
"number is not found".*/
#include<stdio.h>
int search(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1; 
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
    int target;
    printf("Enter the number to search: ");
    scanf("%d",&target);
    int index=search(arr,n,target);
    if(index==-1){
        printf("Number is not found\n");
    }else{
        printf("Number found at index %d\n",index);
    }
    return 0;
}