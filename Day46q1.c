//Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/
#include <stdio.h>

int main() {
    char str[100], result[100];
    int i, j = 0;

    
    scanf("%s", str);

    
    for (i = 0; str[i] != '\0'; i++) {
        char c = str[i];

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            
            continue;
        } else {
            result[j] = c;
            j++;
        }
    }

    result[j] = '\0';   

    printf("%s\n", result);

    return 0;
}
