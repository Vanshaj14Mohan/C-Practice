//Wap to enter two numbers and print their sum;
#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter first number");
    scanf("%d", &a);
    printf("Enter second number");
    scanf("%d", &b);
    // int sum = a + b;
    //a trick
    printf("Sum is: %d", a + b);
    return 0;
}