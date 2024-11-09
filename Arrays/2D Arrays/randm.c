#include<stdio.h>
int main(){
    int arr[] = {1,2,3,4,5};
    printf("%d\n", *(arr+2));
    printf("%d\n", *(arr+3));
    printf("%d", *(arr+7));
    return 0;
}