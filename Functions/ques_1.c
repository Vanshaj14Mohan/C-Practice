//Write a  function to print "Hello" and second to print "Good byee".
#include<stdio.h>

void printMsg(); //declaration prototype

int main(){
    printMsg(); //function call
    return 0;
}

void printMsg(){ //function definition
    printf("Hello\n"); 
    printf("Good byee\n");
    printf("See you soon\n");
    printf("Tomorrow evening\n");
}

//or method 2
// #include<stdio.h>
// void printHello();
// void printGoodbye();

// int main(){
//     printHello();
//     printGoodbye();
// }

// void printHello(){
//     printf("Hello!\n");
// }

// void printGoodbye(){
//     printf("Good byee:)\n");
// }