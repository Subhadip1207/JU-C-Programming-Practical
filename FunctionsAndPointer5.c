/*5. Write a function that will convert the first part of the array into descending order
 and the last part of the array into ascending order, then print the final array.*/
 #include<stdio.h>
 void mixeSsorting(int arr[],int n){
    int j,k,temp;
    for (j = 0; j <n/2-1; j++) {
        for (k = 0; k <n/2-j-1 ; k++) {
            if(arr[k]<arr[k+1]){
                temp=arr[k];
                arr[k]=arr[k+1];
                arr[k+1]=temp;
            }
        }
    }
    for (j =0; j <n/2-1; j++) {
        for (k = n/2; k <n-j-1 ; k++) {
            if(arr[k]>arr[k+1]){
                temp=arr[k];
                arr[k]=arr[k+1];
                arr[k+1]=temp;
            }
        }
    }
    printf("After sorting....");
    for(j=0;j<n;j++){
        printf("%d ",arr[j]);
    }
 }
 int main(){
    int n,i;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements in the array...\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    mixeSsorting(arr,n);
    return 0;
 }