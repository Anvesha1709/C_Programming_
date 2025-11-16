//Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/
#include <stdio.h>

int main() {
    char str[1000];
    int i, j;
    char temp;

    
    scanf("%s", str);

    
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }

    
    i = 0;
    j = len - 1;
    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }

    
    printf("%s", str);

    return 0;
}
