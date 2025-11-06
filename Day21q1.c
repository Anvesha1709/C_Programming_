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

    lastDigit = num % 10; 
    digits = (int)log10(num);  
    firstDigit = num / pow(10, digits);  

    
    if (num < 10) {
        printf("Swapped number: %d\n", num);
        return 0;
    }

    
    int middlePart = num % (int)pow(10, digits);
    middlePart = middlePart / 10;

    
    swappedNum = lastDigit * pow(10, digits) + middlePart * 10 + firstDigit;

    printf("Swapped number: %d\n", swappedNum);

    return 0;
}
