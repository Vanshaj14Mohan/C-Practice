// Write a function to convert celsius to fahrenheit
#include<stdio.h>
float convTemp(float celsius);

int main(){
    float far = convTemp(20);
    printf("Fahrenheit: %f", far);
    return 0;
}

//recursive function
float convTemp(float celsius){
    float far = celsius *(9.0/5.0)+32;
    return far;
}