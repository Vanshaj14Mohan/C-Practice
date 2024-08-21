//Wap to print sum of first n Natural numbers, take n = 4;
#include<stdio.h>
int main(){
    int n;
    int sum =0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i =1, j=n; i<=n && j >=1; i++, j--){
        sum = sum+i;
        printf("%d\n", j);
    }
    printf("Sum is %d \n", sum);
    // for reverse
    // for(int i =n; i>=1; i--){
    //     printf("%d \n", i);
    // }
    return 0;
}
