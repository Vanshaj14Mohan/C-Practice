//Write a function that prints Namaste if user is Indian & Bonjour if the user is french.
#include<stdio.h>
void namaste();
void bonjour();

int main(){
    printf("Enter I for Indian & F for French: ");
    char ch;
    scanf("%c", &ch);
    if(ch == 'I'){
        namaste();
    }
    else{
        bonjour();
    }
    return 0;
}

void namaste(){
    printf("Namaste\n");
}

void bonjour(){
printf("Bonjour\n");
}