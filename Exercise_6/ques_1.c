//Wap in C to find maximum number between two numbers using a pointer.
#include <stdio.h>

int main() {
    int a, b, *num1, *num2, max;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    num1 = &a;
    num2 = &b;

    if (*num1 > *num2) {
        max = *num1;
    } else {
        max = *num2;
    }

    printf("Maximum number is: %d\n", max);

    return 0;
}

