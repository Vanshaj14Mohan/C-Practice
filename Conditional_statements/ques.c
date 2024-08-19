//Wap to check if a student passed or failed.
#include<stdio.h>
int main(){
    int marks;
    printf("Enter the marks out of 100: ");
    scanf("%d", &marks);
    if( marks>30 && marks <=100){
        printf("Student pass");
    }
    else if (marks <= 30){
        printf("Student Fail");
    }
    else{
        printf("Enter valid number");
    }
    return 0;
}