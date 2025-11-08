//Q28: Write a program to print the product of even numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/
#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;  

    printf("Enter the value of n: ");
    scanf("%d", &n);

    
    if (n < 2) {
        printf("No even numbers in the range.\n");
        return 0;
    }

    printf("Even numbers: ");
    for (i = 2; i <= n; i += 2) {
        printf("%d ", i);
        product *= i;
    }

    printf("\nProduct of even numbers from 1 to %d is: %lld\n", n, product);

    return 0;
}
