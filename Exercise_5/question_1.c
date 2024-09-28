//Write a function to find sum of digits of a number
#include<stdio.h>
//function prototype
void caltemp(int temperature);

void calTemp(int temperature){
    if(temperature >= 30){
        printf("Hot temperature \n");
    }   
    else{
        printf("Cold temperature \n");
    }
}

int main(){
    int temperature;
    printf("Enter the temperature:");
    scanf("%d", &temperature);
    calTemp(temperature); //calling the function
    return 0;
}

// #include <stdio.h>

// // Function prototype
// void calTemp(int temperature);

// // Function to print "Hot" or "Cold" based on temperature
// void calTemp(int temperature) {
//     if (temperature >= 30) {
//         printf("Hot\n");
//     } else {
//         printf("Cold\n");
//     }
// }

// int main() {
//     int temperature;

//     // Get user input
//     printf("Enter the temperature: ");
//     scanf("%d", &temperature);

//     // Call the function to check the temperature
//     calTemp(temperature);

//     return 0;
// }
