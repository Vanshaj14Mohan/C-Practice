//Wap to check if given character is digit or not.
#include<stdio.h>
#include<ctype.h> //for isDigit();
int main(){
    char ch; 
    printf("Enter a character: ");
    scanf("%c", &ch);
    if(isdigit(ch)){
        printf("Charcter has digit");
    }
    else{
        printf("Character does'nt have digit");
    }
    return 0;
}