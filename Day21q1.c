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

    printf("Enter a number: ");
    scanf("%d", &num);

    lastDigit = num % 10;  // Get last digit
    digits = (int)log10(num);  // Number of digits - 1
    firstDigit = num / pow(10, digits);  // Get first digit

    // If number has only one digit, no change
    if (num < 10) {
        printf("Swapped number: %d\n", num);
        return 0;
    }

    // Remove first and last digits
    int middlePart = num % (int)pow(10, digits);
    middlePart = middlePart / 10;

    // Construct swapped number
    swappedNum = lastDigit * pow(10, digits) + middlePart * 10 + firstDigit;

    printf("Swapped number: %d\n", swappedNum);

    return 0;
}
