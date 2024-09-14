//Write function to calculate area of a square, a circle and a rectangle
#include<stdio.h>

//for square
float sideArea(float side);
float circleArea(float rad);
float rectangleArea(float a , float b);


int main(){
    float side = 5;
    float rad = 5;
    float a = 5;
    float b = 6;
    printf("Square of a area is : %f \n", sideArea(5));
    printf("Square of a circle is : %f \n", circleArea(5));
    printf("Sqaure of a rectangle is : %f \n", rectangleArea);
    return 0;
}

float sideArea(float side){
    return side * side;
}

float circleArea(float rad){
    return 3.14 * rad * rad;
}

float rectangleArea(float a, float b){
    return a *b;
}
