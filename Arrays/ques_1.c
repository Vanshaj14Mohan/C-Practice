//Wap to enter the price of three items and print their final cost with gst.
#include<stdio.h>
int main(){
    float price[3];
    printf("Enter prices of three products: ");
    scanf("%f", &price[0]);
    scanf("%f", &price[1]);
    scanf("%f", &price[2]);

    printf("Price of first product is: %f\n ", price[0]+(0.18*price[0]));
    printf("Price of second product is: %f\n ", price[1]+(0.18*price[1]));
    printf("Price of third product is: %f\n", price[2]+(0.18*price[2]));
    return 0;
}