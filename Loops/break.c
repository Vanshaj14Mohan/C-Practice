//Keep taking numbers as inputs from the user until user enters an odd number.
//using do while loop
// #include<stdio.h>
// int main(){
//     int n;
//     do{
//         printf("Enter a number: ");
//         scanf("%d", &n);
//         printf("%d \n", n);
//         if(n %2 != 0){
//             break;
//         }
//         }while(1);
//         printf("Entered odd number");
//     return 0;
// }

//using while loop
// #include<stdio.h>
// int main(){
//     int n;
//     while(1){
//         printf("Enter a number: ");
//         scanf("%d", &n);
//         if(n%2 != 0){
//             break;
//         }
//         printf("Even number entered  \n: ");
//     }
//     printf("Exit, Odd number entered");
//     return 0;
// }

#include<stdio.h>
int main(){
    int n;
    for(;;){
        printf("Enter a number: ");
        scanf("%d", &n);
        if(n%2 !=0){
            break;
        }
        printf("Even number entered: \n ");
    }
    printf("Odd number entered");
    return 0;
}