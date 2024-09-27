//Write a function to print n terms of the fibonacci sequence.
#include<stdio.h>
int fib(int n);

int main(){
    printf("%d",fib(6));
    return 0;
}

//recursive function
int fib(int n){
    //base condition
    if(n==0 || n==1){
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
    }
    int fib_n1 = fib(n-1);
    int fib_n2 = fib(n-2);
    int fib_N = fib_n1+ fib_n2;
    //printf("Fibonnaci of %d is : %d \n", n, fib_N);
    return fib_N;
}