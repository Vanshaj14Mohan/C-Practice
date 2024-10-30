//Pointer arithmetic, increment and decrement operator 
#include<stdio.h>
int main(){
    int age = 22;
    int *ptr = &age;
    printf("ptr = %u\n", ptr);
    ptr++;
    printf("ptr = %u\n", ptr);
    ptr--;
    printf("ptr = %u", ptr);
    return 0;
} 
 
// int main(){
//     float price = 20.00;
//     float *ptr = &price;
//     printf("ptr = %u\n", ptr);
//     ptr++;
//     printf("ptr = %u\n", ptr);
//     ptr--;
//     printf("ptr = %u", ptr);
//     return 0;
// }  