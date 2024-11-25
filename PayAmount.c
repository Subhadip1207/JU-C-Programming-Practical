/*2.  In a banking system, there are the following denomination of 
notes: Rs. 10, Rs. 20. Rs. 50. Rs. 100. Write a program that will accept 
an amount and find the minimum number of each note required to pay the amount.*/
#include<stdio.h>
int main(){
    int amount;
    printf("Enter the amount:");
    scanf("%d",&amount);
    int notes[4]={100,50,20,10};
    int count[4]={0,0,0,0};
    for(int i=0;i<4;i++){
        count[i]=amount/notes[i];
        amount=amount%notes[i];
    }
    printf("Minimum notes required:\n");
    for(int i=0;i<4;i++){
        printf("%d notes: %d\n",notes[i],count[i]);
    }
    return 0;
}