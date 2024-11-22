//Write a program to store the first n fibonaaci numbers.
#include<stdio.h>
int main(){
    int n;
    printf("Enter n (n>2): ");
    scanf("%d", &n);
    int fib_arr[100];
    fib_arr[0] = 0;
    fib_arr[1] = 1;
    for(int i = 2; i<n; i++){ //1,2,3,5...
        fib_arr[i] = fib_arr[i-1] + fib_arr[i-2]; //baisc formula nth therm = (n-1) + (n-2)
        printf("%d\t", fib_arr[i]); //elements
    }
    // printf("\n");
    return 0;
}