//Wap to check if the given number is natural number or not
#include<stdio.h>
//creating function
int isNatural(int num){
    return num >0;
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(isNatural(num)){
        printf("A natural number");
    }
    else{
        printf("Not a natural number");
    }
    return 0;
}