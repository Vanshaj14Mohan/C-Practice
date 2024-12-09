//We will see about strcmp() library function in this
#include<stdio.h>
#include<string.h>
int main(){
    printf("For positive one\n");
    char str1[] = "Banana";
    char str2[] = "Apple";
    printf("On comparison: %d", strcmp(str1, str2)); //will give result one
    printf("\n");
    printf("For negative one\n");
    char name1[] = "Apple";
    char name2[] = "Banana";
    printf("On comparison: %d", strcmp(name1, name2)); //will give result -1
    printf("\n");

    printf("For equal one\n");
    char com1[] = "Code";
    char com2[] = "Code";
    printf("On comparison: %d", strcmp(com1, com2)); //will give result 0 
    printf("\n");

    return 0;
}