#include<stdio.h>
int main(){
    int age = 22;
    int *ptr = &age;
    
    //For address
    printf("%p\n", &age); //give output in hexadecimal value
    printf("%u\n", &age); //give output in unsigned int form

    printf("%u\n", ptr); //will give same output as above coz same address value 
    printf("%u\n", &ptr);

    printf("For values now");
    //For value print
    printf("%d\n", age);
}