//Wap to check if a number is prime number or not.
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    if(n %1 ==0 && n %n == 0){
        printf("Number is prime number:");
    }
    else{
        printf("Not a prime number:");
    }
}