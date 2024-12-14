/*7.Write a program to insert an element in the array such that the resultant array remain
sorted,*/
#include<stdio.h>
int main(){
    int n,num;
    printf("Enter the no of elements in the array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the %d element of array:",(i+1));
        scanf("%d",&arr[i]);
    }
    printf("Enter the number to insert: ");
    scanf("%d",&num);
    printf("Before insertion:");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    for(int i=0; i<n; i++){
        if(arr[i]>num){
            for(int j=n-1; j>=i; j--){
                arr[j+1]=arr[j];
            }
            arr[i]=num;
            break;
        }
    }
    printf("\nSorted array after inserting %d is:\n",num);
    for(int i=0; i<n+1; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}