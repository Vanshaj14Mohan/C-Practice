//Write a program to store the first n fibonaaci numbers.
#include<stdio.h>
int main(){
int n;
printf("Enter n:");
scanf("%d", &n);
int fib_arr[n];
fib_arr[0] = 0;
fib_arr[1] = 1;
for(int i = 2; i < n; i++){
fib_arr[i] = fib_arr[i-1] + fib_arr[i-2];
}
printf("Fibonacci series: ");
for(int i = 0; i < n; i++){
printf("%d ", fib_arr[i]);
}
return 0;
}