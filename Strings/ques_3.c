//Make a program that inputs user's name and print it's length.
#include<stdio.h>

int countLength(char arr[]); //function to count length

int main(){
    char name[100];
    fgets(name, 100, stdin);
    printf("Given length is :%d ", countLength(name));
}

int countLength(char arr[]){
    int count = 0;
    for(int i =0; arr[i] !='\0'; i++){
        count ++;
    }
    return count;
}
