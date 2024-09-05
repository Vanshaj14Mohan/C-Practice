#include<stdio.h>

int sum(int a, int b); //Function protoptype

int main(){
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    int s = sum(a,b); //function call
    printf("Sum is %d", s);
    return 0;
}

int sum(int x, int y){ //function definition
    return x+y;
}

