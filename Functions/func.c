#include<stdio.h>

void printHello(); //declarartion prototype

int main(){
    printHello(); //function call
    printHello();
    return 0;
}

void printHello(){ //function definition
    printf("Hello!\n");
    printf("Hello guys!\n");
}
