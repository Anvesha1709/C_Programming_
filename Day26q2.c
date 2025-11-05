//Q52: Write a program to print the following pattern:

/* *

*
*
*

*
*
*
*
*

*
*
*

*



/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/
#include <stdio.h>

int main() {
    int i, j;

    // Increasing part
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("*\n");
        }
        printf("\n"); // blank line after each group
    }

    // Decreasing part
    for (i = 4; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("*\n");
        }
        printf("\n"); // blank line after each group
    }

    return 0;
}
