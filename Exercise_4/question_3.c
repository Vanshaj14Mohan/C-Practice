//Wap to print prime numbers in a range.
#include<stdio.h>
int main(){
    int start, end, count;
    //taking input for range
    printf("Enter starting value: ");
    scanf("%d", &start);
    printf("Enter ending value: ");
    scanf("%d", &end);
    for(int i =start; i<=end; i++){
        count=0;
        for(int j = 1; j<=i;j++){
            if(i%j == 0){
                count = count+1;
            }
        }
        if(count ==2){
            printf("Prime number %d \n", i);
        }
    }
    return 0;
}