//Q53: Write a program to print the following pattern:
/* *
***
*****
*******
*********
*******
*****
***
*

/*
Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*

*/
#include <stdio.h>

int main() {
    int i, j, n = 5;  // n is the number of rows in the upper half

    // Upper half of the pattern
    for (i = 1; i <= n; i++) {
        // print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half of the pattern
    for (i = n - 1; i >= 1; i--) {
        // print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
