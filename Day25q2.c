//Q50: Write a program to print the following pattern:
/*
*****
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

    for (i = 5; i >= 1; i--) {           // rows from 5 to 1
        for (space = 5; space > i; space--) {  // leading spaces
            printf(" ");
        }
        for (j = 1; j <= i; j++) {       // stars in each row
            printf("*");
        }
        printf("\n");                    // move to next line
    }

    return 0;
}
