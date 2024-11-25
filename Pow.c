/*5. Write a program to find the value of one number
 raised to the power of the another number without using the  library function pow() */
 #include<stdio.h>
 int main(){
     int b, p;
     printf("Enter base number: ");
     scanf("%d", &b);
     printf("Enter exponent number: ");
     scanf("%d", &p);

     int result = 1;
     for (int i = 0; i < p; i++) {
         result *= b;
     }

     printf("Result: %d\n", result);

     return 0;
 }