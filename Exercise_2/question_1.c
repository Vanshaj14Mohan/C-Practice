//Write a program to print the average of three numbers
#include<stdio.h>
#include<math.h>
int main(){
    int x, y, z;
    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);
    printf("Enter third number: ");
    scanf("%d", &z);
    int avg = (x+y+z)/3;
    printf("Average of them is: %d", avg);
    return 0;
}