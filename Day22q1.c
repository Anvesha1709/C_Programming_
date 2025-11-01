//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include <stdio.h>

int main() {
    int n, temp, digit, fact, sum = 0;
    scanf("%d", &n);

    temp = n; // store original number

    while (temp > 0) {
        digit = temp % 10;   // get last digit
        fact = 1;

        // find factorial of the digit
        for (int i = 1; i <= digit; i++) {
            fact *= i;
        }

        sum += fact;  // add factorial to sum
        temp /= 10;   // remove last digit
    }

    if (sum == n)
        printf("Strong number");
    else
        printf("Not strong number");

    return 0;
}
