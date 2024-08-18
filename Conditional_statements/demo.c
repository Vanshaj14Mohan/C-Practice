#include<stdio.h>
int main(){
    int age;
    printf("Enter the age: ");
    scanf("%d", &age);
    if(age >= 18){
        printf("User is an adult");
    }
    else if(age > 13 && age < 18){
        printf("User is a teenager");
    }
    else{
        printf("User is not an adult");
    }
    //using ternary operator
    //age >=18 ? printf("User is an adult"): printf("User is not an adult");
    return 0;
}