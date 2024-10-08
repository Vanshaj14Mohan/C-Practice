#include<stdio.h>
int main(){
    int x;
    int *ptr; //making pointer
    ptr = &x; //storing x address in ptr
    *ptr = 0; //x =0

    printf("x = %d\n", x);
    printf("ptr = %d\n", *ptr);

    printf("New case");
    *ptr += 5;
    printf("x = %d\n",x); //value will be 5 
    printf("ptr = %d\n",*ptr); //value will be 5

    printf("Increment operator");
    (*ptr)++;
    printf("x = %d\n", x); //6
    printf("ptr = %d\n", *ptr);//6
    return 0;
}