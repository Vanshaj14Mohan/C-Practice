#include<stdio.h>

int countOdd(int arr[], int n); //function prototype
int main(){
    int arr[] = {1,2,3,4,5,6};
    printf("Total odd numbers are: %d", countOdd(arr, 6));
    return 0;
}

int countOdd(int arr[], int n){
    int count = 0;
    for(int i =0; i<n; i++){
        if(arr[i] %2 !=0){
            count++;
        }
    }
    return count;

}