//Wap to print factorial of a number
#include<stdio.h>
int main(){
    int fact = 1;
    int n ;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i =1; i<=n; i++){
        fact = fact *i ;
    }
    printf("Factorial of number is %d:", fact);
    return 0;
}