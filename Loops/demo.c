#include<stdio.h>
int main(){
    int i;
    for(i =0; i<10; i++){ //first case
        printf("Helloworld \n");
    }
    for(float i = 0; i<=5; i++){ //second case
        printf("%f \n", i);
    }
    for(char ch ='a'; ch<='z'; ch++){ //third case
        printf("%c \n", ch);
    }
    return 0;
}
