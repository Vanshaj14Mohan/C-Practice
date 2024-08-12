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
    int divslash = a/b;
    printf("Sum of number is: %d \n", sum);
    printf("Divison of number is: %d \n", div);
    printf("Muliply of number is: %d \n", mul);
    printf("By of number is: %d \n", divslash);
    return 0;
}