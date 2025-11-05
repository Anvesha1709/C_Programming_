//Q51: Write a program to print the following pattern:
   /* 5
   45
  345
 2345
12345

/*
Sample Test Cases:
Input 1:

Output 1:
    5
   45
  345
 2345
12345

*/
#include <stdio.h>

int main() {
    int i, j, k;
    int n = 5; // number of rows

    for (i = n; i >= 1; i--) {
        // print spaces
        for (j = 1; j < i; j++) {
            printf(" ");
        }

        // print numbers from i to n
        for (k = i; k <= n; k++) {
            printf("%d", k);
        }

        printf("\n");
    }

    return 0;
}
