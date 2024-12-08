//We will see about strcpy() library function in this
#include<stdio.h>
#include<string.h>

int main(){
    char str1[] = "Good";
    char str2[] = "Morning";
    strcpy(str1, str2);
    puts(str1); //value will be changed
    return 0;
}