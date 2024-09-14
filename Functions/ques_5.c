//Wap to count gst on a given price
#include<stdio.h>

void calcPrice( float n); //function declarartion

int main(){
    float n = 10;
    calcPrice(n);
    // printf("Enter the number:");
    // scanf("%f", &n);
    // calcPrice(float n);
    return 0;
}

void calcPrice(float n){
    n = n + (0.18*100);
    printf("New amount after gst is : %f", n);
}