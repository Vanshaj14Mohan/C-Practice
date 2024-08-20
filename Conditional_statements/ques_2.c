//Wap to give grades to a student
#include<stdio.h>
int main(){
    int marks;
    printf("Enter marks out of 100: ");
    scanf("%d", &marks);
    if(marks >= 90 && marks <= 100){
        printf("A+ Grade \n");
    }
    else if( marks <90 && marks >= 70){
        printf("A Grade \n");
    }
    else if( marks < 70 && marks >= 30){
        printf("B Grade \n");
    }
    else if( marks > 30){
        printf("C Grade \n");
    }
    else{
        printf("Enter valid number");
    }
    return 0;
}