//Wap to enter the price of three items and print their final cost with gst. another approach
#include<stdio.h>
int main(){
    int marks [] = {100.0, 200.0, 300.0};
    printf("Total price of one: %f\n", marks[0]+(0.18*marks[0]));
    printf("Total price of two: %f\n", marks[1]+(0.18*marks[1]));
    printf("Total price of three: %f\n", marks[2]+(0.18*marks[2]));
    return 0;
}

//Easy approach for this one..