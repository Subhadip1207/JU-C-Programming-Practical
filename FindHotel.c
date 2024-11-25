/*3. In a hotel, a professor  lives in a room no. X. 
The room number are sequentially numbered from 1 to n (n can be any integer). 
The sum of the room numbers left to X
 is equal to the sum of the room numbers to the right of X.  Write a program to find X.*/
 #include<stdio.h>
 int main(){
    int n;
    printf("Enter the total no of rooms:");
    scanf("%d",&n);
    int i;
    int leftSum=0,rightSum=0;
    for(i=1;i<=n;i++){
        leftSum=leftSum+(i-1);
        rightSum=((n+1)*(n+1-1)/2)-leftSum-i;
        if(leftSum==rightSum){
            printf("room is :%d",i);
            break;
        }
    }
    return 0;

}