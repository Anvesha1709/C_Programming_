//Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/
/*
Q27: Write a program to print the sum of the first n odd numbers.
*/

#include <stdio.h>

int main() {
    int n, sum = 0, i, odd = 1;

    
    scanf("%d", &n);

    
    for (i = 1; i <= n; i++) {
        sum += odd;   
        odd += 2;     
    }

    
    printf("%d\n", sum);

    return 0;
}
