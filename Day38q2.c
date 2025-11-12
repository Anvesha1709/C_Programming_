//Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
#include <stdio.h>

int main() {
    int n, m, i, j;
    int isSymmetric = 1;  

    
    scanf("%d %d", &n, &m);

    int a[n][m];

    
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    
    if(n != m) {
        printf("False");
        return 0;
    }

    
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            if(a[i][j] != a[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if(!isSymmetric)
            break;
    }

    
    if(isSymmetric)
        printf("True");
    else
        printf("False");

    return 0;
}
