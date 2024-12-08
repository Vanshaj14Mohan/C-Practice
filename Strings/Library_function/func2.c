//We will see about strcat() library function in this
//note firstStr=> len1 + len2 >= it should have the capapcity to be able to store both strings.
#include<stdio.h>
#include<string.h>

int main(){
    char str1[] = "Hello";
    char str2[] = "Guys";
    strcat(str1, str2);
    puts(str1); //will concatenate both the string values
    return 0;
}
