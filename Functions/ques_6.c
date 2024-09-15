//Wap to calculate the square of a number given by the user using library functions
#include<stdio.h>
#include<math.h>

int main(){
    int n = 4;
    printf("%f", pow(n,2)); //f coz pow is double so to convert int to double
    return 0;
}

//Note-> Whenever we want to print double values use float