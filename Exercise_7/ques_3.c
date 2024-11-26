//Wap in an array of numbers and find how many times does the number "x" occurs.
#include<stdio.h>
int main(){
    int arr[100];
    int n,x, count = 0;

    //Input the size of the array
    printf("Enter the number of elements in an array: ");
    scanf("%d", &n);

    //Input array elements
    printf("Enter %d elements:\n", n);
    for(int i =0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    //Input the number to search for
    printf("Enter the number to count occurences of: ");
    scanf("%d", &x);

    //count occurences of x in an array
    for(int i =0; i<n; i++){
        if(arr[i] == x){
            count ++;
        }
    }

    printf("The number %d occurs %d times in an array\n", x, count);
    return 0;
}