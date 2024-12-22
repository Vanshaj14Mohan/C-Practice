//Find the salted form of a password entered by the user if the salt is "123" & add it at the end.
#include<stdio.h>
#include<string.h>

//creating function
void salting(char password[]); //will print the new password

int main(){
    char password[100];
    scanf("%s", password);
    salting(password);
    return 0;
}

void salting(char password[]){
    char salt[] = "123";
    char newPass[200];

    //using library functions
    strcpy(newPass, password); //newPass = test
    strcat(newPass, salt);  //newPass = "test" + "123"
    puts(newPass);
}