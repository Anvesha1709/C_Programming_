//Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int a[100][100];
    int i, j;

    
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int sum = 0;

    
    for (i = 0; i < n && i < m; i++) {
        sum += a[i][i];
    }

    printf("%d", sum);

    return 0;
}

