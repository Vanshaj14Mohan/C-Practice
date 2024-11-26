//Wap to insert an element at the end of an array.
#include <stdio.h>

#define MAX_SIZE 100  // Maximum size of the array

int main() {
    int arr[MAX_SIZE];  // Array declaration
    int n, element, i;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Ensure the array size is within bounds
    if (n >= MAX_SIZE) {
        printf("Array size exceeds the maximum allowed size of %d.\n", MAX_SIZE);
        return 1;
    }

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to insert
    printf("Enter the element to insert at the end: ");
    scanf("%d", &element);

    // Insert the element at the end
    arr[n] = element;

    // Increment the size of the array
    n++;

    // Print the updated array
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}




