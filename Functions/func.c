#include<stdio.h>

void printHello(); //declarartion prototype

int main(){
    printHello(); //function call
    printHello();
}

void printHello(){ //function definition
    printf("Hello!\n");
    printf("Hello guys!\n");
}