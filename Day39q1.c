//Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int a[100][100];
    int i, j;

    
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    
    int diag[100];
    int n_diag = (rows < cols) ? rows : cols;  

    for (i = 0; i < n_diag; i++) {
        diag[i] = a[i][i];
    }

    
    int distinct = 1; 

    for (i = 0; i < n_diag; i++) {
        for (j = i + 1; j < n_diag; j++) {
            if (diag[i] == diag[j]) {
                distinct = 0; 
                break;
            }
        }
        if (!distinct) {
            break;
        }
    }

    if (distinct) {
        printf("True");
    } else {
        printf("False");
    }

    return 0;
}


