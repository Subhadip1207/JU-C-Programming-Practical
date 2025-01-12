/*1.Write a function to take one 10 elements 1-D integer array and find the third maximum,
 the fifth minimum & the middle element of the array (in any order). Special credit will be given if you can do it without sorting the array.*/
 #include<stdio.h>
 #include<limits.h>
 void thirdMaximum(int arr[10]){
    int max,i,j,thirdMax,k;
    for(i=0;i<3;i++){
        max=arr[0];
        for(j=0;j<10;j++){
            if(arr[j]==thirdMax){
                continue;
            }
            if(arr[j]>max){
                max=arr[j];
            }
        }
       thirdMax=max;
       for(k=0;k<10;k++){
        if(arr[k]==thirdMax){
            arr[k]=0;
        }
       }
    }
    printf("ThirdMax = %d\n",thirdMax);
 }

void fifthMinimum(int arr[10]){
    int min, i,j,k,fifthMin;
    for(i=0;i<5;i++){
        min=arr[0];
        for(j=0;j<10;j++){
            if(arr[j]==fifthMin){
                continue;
            }
            if(arr[j]<min){
                min=arr[j];
            }
        }
        fifthMin=min;
        for(k=0;k<10;k++){
        if(arr[k]==fifthMin){
            arr[k]=INT_MAX;
        }
       }
    }
    printf("FifthMin = %d\n",fifthMin);
}
int main(){
int a[10],b[10],c[10],i;
printf("Enter the elements in the array...\n");
for(i=0;i<10;i++){
    scanf("%d",&a[i]);
    c[i]=b[i]=a[i];
}
thirdMaximum(a);
fifthMinimum(b);
printf("Mid element is : %d",c[4]);
return 0;
}