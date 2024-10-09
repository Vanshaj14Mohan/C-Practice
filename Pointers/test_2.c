//Pointer to Pointer case:
#include<stdio.h>
int main(){
    // float price = 100.0;
    // float *ptr = &price;
    // float **pptr = &ptr;
    // printf("Value stored in above is", **pptr);
    int i = 5;
    int *ptr = &i;
    int **pptr = &ptr;
    printf("Value at **pptr is: %d\n", **pptr);
    return 0;
}