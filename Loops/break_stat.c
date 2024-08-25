//Break Statement
#include<stdio.h>
int main(){
    for(int i = 1; i<=10; i++){
        if(i ==7){
            break;
        }
        printf("%d \n", i);
    }
    printf("End coz of break:");
    return 0;
}