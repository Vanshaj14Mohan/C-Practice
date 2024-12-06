//Ask the user to enter their firstName and print it back to them. Also try this with their fullName
// #include<stdio.h>
// int main(){
//     // char firstName[10];
//     // scanf("%s", firstName);
//     // printf("Given FirstName is %s: ", firstName);
//     char fullName[30];
//     scanf("%s", fullName);
//     printf("Full Name is %s", fullName);
//     return 0;
// } will not print the full string, just the first word of that

// #include<stdio.h>
// int main(){
//     char name[100];
//     gets(name);
//     puts(name);
//     return 0;
// }

//A better way approach using fgets and puts
#include<stdio.h>
int main(){
    char name[100];
    fgets(name, 100, stdin);
    puts(name);

    char *canChange = "Hello world";
    puts(canChange);
    canChange = "hello";
    puts(canChange); //can change the value of canChange coz we user char pointer

    return 0;
}


