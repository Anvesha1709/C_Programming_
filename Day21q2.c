//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digits, swappedNum;

    // Input number
    scanf("%d", &num);

    // Find last digit
    lastDigit = num % 10;

    // Find total digits
    digits = (int)log10(num);

    // Find first digit
    firstDigit = num / pow(10, digits);

    // If number has only one digit
    if (num < 10) {
        printf("%d", num);
        return 0;
    }

    // Remove first and last digits, keep middle part
    int middle = num % (int)pow(10, digits);
    middle = middle / 10;

    // Construct the new number
    swappedNum = lastDigit * pow(10, digits) + middle * 10 + firstDigit;

    // Output
    printf("%d", swappedNum);

    return 0;
}
