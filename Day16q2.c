//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include <stdio.h>

int main() {
    int num, original, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;  // Store original number for comparison

    while (num != 0) {
        remainder = num % 10;               // Get last digit
        reversed = reversed * 10 + remainder; // Build reversed number
        num = num / 10;                     // Remove last digit
    }

    if (original == reversed)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}
