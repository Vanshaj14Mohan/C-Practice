//Wap to check if a number is divisible by 2 or not.
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    //printf("%d", n%2 ==0); short trick
    if(n %2 == 0){
        printf("Divisible by 2");
    }
    else{
        printf("Not Divisible by 2");
    }
    return 0;
}