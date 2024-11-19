/*6. Write a program to calculate the marks obtained by any student in 5 different
subjects, entered form keyboard, finally the grade will be assigned depending on the
following criteria on the average marks obtained:--
i. If avg is greater than “90” but less than “100” assign grade as ‘A’
ii. If avg is greater than “80” but less than “90” assign grade as ‘B’
iii. If avg is greater than “70” but less than “80” assign grade as ‘C’
iv. If avg is greater than “60” but less than “70” assign grade as ‘D’
v. If avg is greater than “50” but less than “60” assign grade as ‘E’
vi. If avg is less than “50” assign grade as ‘F’ and mention the student as
a failed candidate.
vii. Otherwise he/she will be considered as a successful one.*/
#include<stdio.h>
# define SUBJECT 5
int main(){
    int num,sum=0;
    for(int i=0;i<SUBJECT;i++){
        printf("Enter the marks between 0 to 100 : \n ");
        scanf("%d",&num);
        sum+=num;
    }
    float avg=sum/SUBJECT;
    if(avg>90 && avg<100){
        printf("Your grade is A");
    }else if(avg>80){
        printf("Your grade is B");
    }else if(avg>70){
        printf("Your grade is C");
    }else if(avg>60){
        printf("Your grade is D");
    }else if(avg>50){
        printf("Your grade is E");
    }else{
        printf("Your grade is F and you are fail");
    }
    return 0;
}