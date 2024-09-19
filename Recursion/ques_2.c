//Wap to find factorial of a number using recursion
#include<stdio.h>

int fact(int n);

int main(){
    printf("Factorial of the given number is :%d", fact(6));
    return 0;
}

//recursive function
int fact(int n){
    if (n == 0){ //or it can also be on 1 too.
        return 1;
    }
    // printf("calc fact of n: %d\n", n);
    int fact_sum = fact(n-1);
    int fact_final = fact_sum * n;
    return fact_final;
}