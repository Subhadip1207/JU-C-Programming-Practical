/*12. Write a program to compute an union of two sorted list
 of integers so that the resultant list remain sorted.*/
 #include<stdio.h>
 #include<stdlib.h>

int merge(int arr1[], int arr2[], int m, int n) { 
    int i=0,j=0;
    while(i<m && j<n){
        if(arr1[i]<arr2[j]){
            printf("%d ", arr1[i]);
            i++;
        }else if(arr1[i]>arr2[j]){
            printf("%d ", arr2[j]);
            j++;
        }else{
            printf("%d ", arr1[i]);
            i++;
            j++;
        }
    }
    while(i<m){
        printf("%d ", arr1[i]);
        i++;
    }
    while(j<n){
        printf("%d ", arr2[j]);
        j++;
    }
} 
int main() {
    int arr1[] = {1, 3, 5, 7, 9};
    int arr2[] = {2, 4, 6, 8, 10, 12};
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
    printf("Sorted union of given lists is: ");
    merge(arr1,arr2,m,n);
    return 0;
}