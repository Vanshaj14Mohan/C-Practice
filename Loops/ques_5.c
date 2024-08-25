//Keep taking numbers as input from the user until enters a number which is multiple of 7.
#include<stdio.h>
int main(){
    int n;
    for(;;){
        printf("Enter a number: ");
        scanf("%d", &n);
        if(n%7 == 0){
            break;
        }
        printf("Normal numbers\n");
    }
    printf("Multiple of 7 detected");
    return 0;
}

//using while loop
// #include<stdio.h>
// int main(){
//     int n;
//     while(1){
//         printf("Enter a number: ");
//         scanf("%d", &n);
//         if(n%7 ==0){
//             break;
//         }
//         printf("Normal number\n");
//     }
//     printf("Multiple of 7");
//     return 0;
//     }

//using do while
// #include<stdio.h>
// int main(){
//     int n;
//     do{
//         printf("Enter a number :");
//         scanf("%d", &n);
//         printf("%d \n", n);
//         if(n%7 == 0){
//             break;
//         }
//     }while(1);
//     printf("Multiple of 7");
//     return 0;
// }