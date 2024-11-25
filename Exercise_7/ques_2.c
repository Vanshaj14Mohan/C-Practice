//Wap to insert an element an element at the end of an array.
#include<stdio.h>
int main(){
    int arr[10];
    int n, element, i;

    //Taking size of an array
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    //make sure that array size is within bounds
    if(n >= 10){
        printf("Array size exceeds the given size %d\n", 10);
        return 1;
    }

    //Input array elements
    printf("Enter %d elements:\n", n);
        for(i = 0; i<n; i++){
            scanf("%d", arr[i]);
        }

    //Input the element to insert
    printf("Enter element to be inserted at end");
    scanf("%d", &element);

    //Insert element at the end
    arr[n] = element;
    n++;

    //print updated array
    printf("Array after insertion:\n");
    for(i=0; i<n;i++){
        printf("%d\n", arr[i]);
    }
    return 0;
    }

