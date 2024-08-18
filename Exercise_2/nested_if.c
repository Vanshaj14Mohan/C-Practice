#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num >0){
        printf("Number is Positive \n");
        if(num %2 == 0){
            printf("An even number");
        }
        else{
            printf("An odd number");
        }
    }
    else{
        printf("Number is Negative");
    }
    return 0;
}