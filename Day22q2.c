//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/
#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0, numerator = 1.0, denominator = 2.0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += numerator / denominator;
        numerator += 2;   // increase numerator by 2 each time
        denominator += 2; // increase denominator by 2 each time
    }

    printf("Approximate sum: %.1f", sum);

    return 0;
}
