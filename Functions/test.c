#include<stdio.h>
void calculatePrice(float value);

int main(){
    float value = 100;
    calculatePrice(value);
    return 0;
}

void calculatePrice(float value){
    value = value+(0.17 *100);
    printf("Final price is: %f", value);
}