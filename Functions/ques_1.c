//Wap a function to print "Hello" and second to print "good byee".
// #include<stdio.h>

// void printMsg(); //declaration prototype

// int main(){
//     printMsg(); //function call
// }

// void printMsg(){ //function definition
//     printf("Hello\n"); 
//     printf("good byee\n");
// }

//or method 2
#include<stdio.h>
void printHello();
void printGoodbye();

int main(){
    printHello();
    printGoodbye();
}

void printHello(){
    printf("Hello!\n");
}

void printGoodbye(){
    printf("Good byee:)\n");
}