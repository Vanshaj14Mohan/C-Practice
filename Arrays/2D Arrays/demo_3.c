//Write a function to reverse an array.
#include<stdio.h>
//function prototype

//now to print array
void printArr(int arr[], int n);

void revArr(int arr[], int n); //function prototype

int main(){
    int arr[] = {1,2,3,4,5,6};
    revArr(arr, 6); //function call
    printArr(arr, 6);
    return 0;
}

void printArr(int arr[], int n){
    for(int i =0; i<n; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

//void coz revArr is not returning anything
void revArr(int arr[], int n){ //function definition
    for(int i =0; i<n/2; i++){
       int firVal = arr[i];
       int secVal =  arr[n-i-1]; //classic formula
       //now to reverse it
       arr[i] = secVal;
       arr[n-i-1] = firVal;
    }
}