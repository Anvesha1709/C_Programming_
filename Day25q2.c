//Q50: Write a program to print the following pattern:
/* *****
 ****
  ***
   **
    *

/*
Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/
#include <stdio.h>

int main() {
    int i, j, space;

    // Outer loop for rows
    for (i = 0; i < 5; i++) {
        // Print leading spaces
        for (space = 0; space < i; space++) {
            printf(" ");
        }

        // Print stars
        for (j = 5; j > i; j--) {
            printf("*");
        }

        printf("\n"); // Move to next line after each row
    }

    return 0;
}
