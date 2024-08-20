//Wap to find if a character entered by user is uppercase or not.
#include<stdio.h>
#include<ctype.h>
int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    // if(ch >= 'A' && ch <='Z'){
    //     printf("Uppercase");
    // }
    // else if(ch >= 'a' && ch >= 'z'){
    //     printf("Lowercase");
    // }
    // else{
    //     printf("Not official letter");
    // }
    //another method
    if(isupper(ch)){
        printf("Character is in Uppercase");
    }
    else{
        printf("Character is not in Uppercase");
    }
    return 0;
}