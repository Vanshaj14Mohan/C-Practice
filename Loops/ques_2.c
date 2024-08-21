//Wap to print the numbers from 0 to n; if n is given by user (take n as 5)
// #include<stdio.h>
// int main(){
//     int i =0;
//     while(i<=5){
//         printf("%d \n", i);
//         i++;
//     }
//     return 0;
// }
//another method
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int i =0;
    while(i<=n){
        printf("%d \n", i);
        i++;
    }
    return 0;
}