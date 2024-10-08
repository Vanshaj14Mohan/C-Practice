#include<stdio.h>
int main(){
    int x;
    int *ptr; //making pointer
    ptr = &x; //storing x address in ptr
    *ptr = 0; //x =0

    printf("x = %d\n", x);
    printf("ptr = %d\n", *ptr);
    return 0;
}