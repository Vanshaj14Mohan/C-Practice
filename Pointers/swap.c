// Swap two numbers a & b;
#include<stdio.h>
int main(){
    int a, b, temp;
    printf("Enter number a:");
    scanf("%d", &a);
    printf("Enter number b:");
    scanf("%d", &b);
   
   //Before swapping case..
   printf("Before swapping: a= %d, b= %d\n", a, b);
   
   //Condition for swapping
   temp = a;
   a= b;
   b = temp;

   //After swapping
   printf("After swapping a = %d, b = %d\n", a,b);
   return 0;
}