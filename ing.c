#include <stdio.h>

int main() {
    int arr[][3] = {
        {20},
        {30},
        {40}
    };

    // Calculate rows and columns
    int rows = sizeof(arr) / sizeof(arr[0]);
    int cols = sizeof(arr[0]) / sizeof(arr[0][0]);

    // Print array
    printf("Array elements:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Print rows and columns
    printf("\nRows = %d\n", rows);
    printf("Columns = %d\n", cols);

    return 0;
}
