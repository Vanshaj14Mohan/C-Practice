//Write a function to calculate sum, product and average of 2 numbers. Print average in main function 
#include<stdio.h>
 
int sum(int a , int b); // function prototype
int product(int a , int b); //function prototype
int average(int a, int b); //function prototype

int main(){
    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    //For sum
    int s = sum(a, b);
    printf("Sum is %d:\n", s);
    //For Product
    int p = product(a,b);
    printf("Product is %d:\n", p);
    //For Average
    int avg = average(a,b);
    printf("Average is %d:", avg);
}

//For sum
int sum(int a, int b){
    return a+b;
}

//For Product
int product(int a, int b){
    return a*b;
}

int average(int a, int b){
    return (a+b)/2;
}