//Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int freq1[26] = {0}, freq2[26] = {0};
    int i;

    // Read two strings (no spaces)
    scanf("%s", str1);
    scanf("%s", str2);

    // Count frequency of characters in str1
    for (i = 0; str1[i] != '\0'; i++) {
        char c = str1[i];
        freq1[c - 'a']++;
    }

    // Count frequency of characters in str2
    for (i = 0; str2[i] != '\0'; i++) {
        char c = str2[i];
        freq2[c - 'a']++;
    }

    // Compare frequency arrays
    for (i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            printf("Not anagrams\n");
            return 0;
        }
    }

    printf("Anagrams\n");
    return 0;
}
