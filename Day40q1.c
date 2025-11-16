//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

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

    int d = 0;
    int first = 1; 

    
    for (j = 0; j < m; j++) {
        int temp[100];
        int k = 0;

        int x = 0, y = j;
        while (x < n && y >= 0) {
            temp[k++] = a[x][y];
            x++;
            y--;
        }

        
        if (d > 0 && d % 2 == 0) {
            int left = 0, right = k - 1;
            while (left < right) {
                int t = temp[left];
                temp[left] = temp[right];
                temp[right] = t;
                left++;
                right--;
            }
        }

        
        for (i = 0; i < k; i++) {
            if (!first) {
                printf(" ");
            }
            printf("%d", temp[i]);
            first = 0;
        }

        d++;
    }

    
    for (i = 1; i < n; i++) {
        int temp[100];
        int k = 0;

        int x = i, y = m - 1;
        while (x < n && y >= 0) {
            temp[k++] = a[x][y];
            x++;
            y--;
        }

        
        if (d > 0 && d % 2 == 0) {
            int left = 0, right = k - 1;
            while (left < right) {
                int t = temp[left];
                temp[left] = temp[right];
                temp[right] = t;
                left++;
                right--;
            }
        }

        
        for (j = 0; j < k; j++) {
            if (!first) {
                printf(" ");
            }
            printf("%d", temp[j]);
            first = 0;
        }

        d++;
    }

    return 0;
}

