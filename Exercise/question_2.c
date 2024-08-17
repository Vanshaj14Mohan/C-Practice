//Check conditions whether they are true or not.
//a-> if it's sunday & it's snowing.
//b-> if it's monday or it's raining.
//c-> if a number is greater than 9 & less than 100 (2 digit number)
#include<stdio.h>
#include<math.h>
int main(){
    int isSunday = 1;
    int isSnowing = 1;
    int isMonday = 0;
    int isRaining = 1;
    int x;
    printf("%d \n", isSunday && isSnowing); //returns 1-> true
    printf("%d \n", isMonday || isRaining); //returns 1-> true
    printf("Enter the number: ");
    scanf("%d", &x);
    printf("%d \n", x>9 && x<100);
    return 0;
}