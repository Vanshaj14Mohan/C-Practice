// Write a function to convert celsius to fahrenheit
#include<stdio.h>
float convTemp(float celsius);

int main(){
    float far = convTemp(10);
    printf("Fahrenheit: %f", far);
    return 0;
}

//recursive function
float convTemp(float celsius){
    float far = celsius *(9/5)+32;
    return far;
}