//Wap to print all the letters in English alphabet using a pointer.
#include<stdio.h>
int main(){
    char alpha[26];
    char *ptr = alpha;

    for(int i = 0; i<26; i++){
        *(ptr+i) = 'A' + i;
    }

   //For alphabet 
    printf("English Alphabet:\n");
    for(int i =0; i<26; i++){
        printf("%c\n", *(ptr+i));
    }
    return 0;
}