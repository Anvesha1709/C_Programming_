//Q80: Multiply two matrices.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/
#include <stdio.h>

int main() {
    int r1, c1;
    int r2, c2;
    int i, j, k;

    
    scanf("%d %d", &r1, &c1);

    int a[100][100];

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    
    scanf("%d %d", &r2, &c2);

    int b[100][100];
    
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    
    int c[100][100];


    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            c[i][j] = 0;
        }
    }

    
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            for (k = 0; k < c1; k++) { 
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d", c[i][j]);
            if (j < c2 - 1) {
                printf(" ");
            }
        }
        if (i < r1 - 1) {
            printf("\n");
        }
    }

    return 0;
}
