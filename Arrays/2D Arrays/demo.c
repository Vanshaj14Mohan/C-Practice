// #include <stdio.h>

// int main() {
//     // Define a 2D array (3x3 array)
//     int arr[3][3] = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
//     };

//     // Get the number of rows and columns
//     int rows = 3;
//     int cols = 3;

//     // Nested loop to print the 2D array
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             printf("%d ", arr[i][j]);
//         }
//         // Newline after each row
//         printf("\n");
//     }

//     return 0;
// }

#include <stdio.h>

int main() {
    // Define a 2D array (3x3 array)
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Get the number of rows and columns
    int rows = 3;
    int cols = 3;

    // Print original array
    printf("Original Array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Transpose the array
    int transpose[3][3]; // Create a new array for the transposed version

    // Swap rows and columns for transposition
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = arr[i][j];
        }
    }

    // Print the transposed array
    printf("\nTransposed Array:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}

