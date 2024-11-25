//Write a program to print the largest number in an array.
#include<stdio.h>
int main(){
    int n, i, largest;
    printf("Enter number of elements in array:");
    scanf("%d", &n);

    //Declaring the array
    int arr[10];

    //now inputing elements of the array
    printf("Enter %d elements:\n", n);
    for(int i =0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    //Initialize largest with first element
    largest = arr[0];

    //now for largest value
    for(int i =1; i<n;i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }

    //printing largest element
    printf("Largest number in the array: %d\n", largest);
    return 0;
} 

