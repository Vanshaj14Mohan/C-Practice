#include<stdio.h>
int main(){
    char star = 'x';
    char *ptr = &star;
    printf("ptr = %u\n", ptr);
    ptr++;
    printf("ptr = %u\n", ptr);
    ptr--;
    printf("ptr = %u", ptr);
    return 0;
}  