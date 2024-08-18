#include<stdio.h>
int main(){
    int day; //1-7 ie Monday-Sunday
    printf("Enter day from 1 to 7: ");
    scanf("%d", &day);
    switch(day){
        case 1: printf("It's Monday \n");
        break;
        case 2: printf("It's Tuesday \n");
        break;
        case 3: printf("It's Wednesday \n");
        break;
        case 4: printf("It's Thursday \n");
        break;
        case 5: printf("It's Friday \n");
        break;
        case 6: printf("It's Saturday \n");
        break;
        case 7: printf("It's Sunday \n");
        break;
        default: printf("Not a valid number and day");
    }
    return 0;
}

//using characters.
// #include<stdio.h>
// int main(){
//     char day; //a-g ie Monday-Sunday
//     printf("Enter day from 1 to 7: ");
//     scanf("%c", &day);
//     switch(day){
//         case 'a': printf("It's Monday \n");
//         break;
//         case 'b': printf("It's Tuesday \n");
//         break;
//         case 'c': printf("It's Wednesday \n");
//         break;
//         case 'd': printf("It's Thursday \n");
//         break;
//         case 'e': printf("It's Friday \n");
//         break;
//         case 'f': printf("It's Saturday \n");
//         break;
//         case 'g': printf("It's Sunday \n");
//         break;
//         default: printf("Not a valid number and day");
//     }
//     return 0;
// }