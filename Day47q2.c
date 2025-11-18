//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char longest[200];
    int i, len = 0, maxLen = 0, start = 0, maxStart = 0;

    
    printf("Enter a sentence:\n");
    fgets(str, sizeof(str), stdin);

    int n = strlen(str);

    
    for (i = 0; i <= n; i++) {
        
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0') {
            if (len > maxLen) {
                maxLen = len;      
                maxStart = start;  
            }
            len = 0;               
            start = i + 1;         
        } else {
            len++;                 
        }
    }

    
    for (i = 0; i < maxLen; i++) {
        longest[i] = str[maxStart + i];
    }
    longest[maxLen] = '\0'; 

    printf("%s\n", longest);

    return 0;
}
