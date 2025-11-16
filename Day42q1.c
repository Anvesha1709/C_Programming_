//Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/
#include <stdio.h>

int main() {
    char str[1000];
    int i;
    int vowels = 0, consonants = 0;

    
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            
            if (ch >= 'A' && ch <= 'Z') {
                ch = ch + ('a' - 'A');  
            }

        
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Vowels=%d, Consonants=%d", vowels, consonants);

    return 0;
}
