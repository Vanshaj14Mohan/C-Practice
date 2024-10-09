//Pointer to Pointer case:
#include<stdio.h>
int main(){
    float price = 100.0;
    float *ptr = &price;
    float **pptr = &ptr;
    printf("Value stored in above is", **pptr);
    return 0;
}