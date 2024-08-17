//Wap to print the smallest number between two numbers.
#include<stdio.h>
int main(){
    int num1, num2;
    printf("Enter number one: ");
    scanf("%d", &num1);
    printf("Enter number two: ");
    scanf("%d", &num2);
    //checking for conditions
    if(num1 < num2){
        printf("Number two is bigger than one");
    }
    else if(num2 < num1){
        printf("Number one is greater than two");
    }
    else{
        printf("Both are equals");
    }
    return 0;
}
