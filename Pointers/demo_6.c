//Wap in C to find maximum number between two numbers using a pointer. 
//normal case
#include<stdio.h>

void testCase(int a, int b, int *sum, int *prod, int *avg);

int main(){
    int a , b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    int sum, prod, avg;
    testCase(a, b, &sum, &prod, &avg);

    printf("sum = %d, prod = %d, avg = %d\n", sum, prod, avg);
    return 0;
}

void testCase(int a, int b, int *sum, int *prod, int *avg ){
//using pointer
*sum = a+b;
*prod = a*b;
*avg = (a+b)/2;
}