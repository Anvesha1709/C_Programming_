//Q48: Write a program to print the following pattern:
/*1
12
123
1234
12345

/*
Sample Test Cases:
Input 1:

Output 1:
1
12
123
1234
12345

*/
#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {        // rows
        for (j = 1; j <= i; j++) {    // columns
            printf("%d", j);          // print numbers from 1 to i
        }
        printf("\n");                 // move to next line after each row
    }

    return 0;
}
