#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter number a:");
    scanf("%d", &a);
    printf("Enter number b:");
    scanf("%d", &b);
    int sum = a+b;
    int div = a-b;
    int mul = a*b;
    // int div = a-b;
    printf("Sum of number is: %d \n", sum);
    printf("Div of number is: %d \n", div);
    printf("Mul of number is: %d \n", mul);
    return 0;
}