//Array operations

#include<stdio.h>
int main(){
    int marks[3];
    printf("Enter maths marks: ");
    scanf("%d", &marks[0]);
    printf("Enter english marks: ");
    scanf("%d", &marks[1]);
    printf("Enter computer marks: ");
    scanf("%d", &marks[2]);

    printf("maths = %d, english = %d, computer = %d", marks[0], marks[1], marks[2]);
    return 0;
}