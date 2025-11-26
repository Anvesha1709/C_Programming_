//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <ctype.h>   

int main() {
    char str[100];
    int i, lastSpaceIndex = -1;

    printf("Enter a name: ");
    fgets(str, sizeof(str), stdin);

    
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            lastSpaceIndex = i;
        }
    }

    
    if (str[0] != ' ' && str[0] != '\n' && str[0] != '\0') {
        printf("%c.", toupper(str[0]));
    }

    
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && i != lastSpaceIndex) {
            if (str[i+1] != ' ' && str[i+1] != '\n' && str[i+1] != '\0') {
                printf("%c.", toupper(str[i+1]));
            }
        }
    }


    printf(" ");

    
    if (lastSpaceIndex != -1) {
        i = lastSpaceIndex + 1;
        while (str[i] != '\0' && str[i] != '\n') {
            printf("%c", str[i]);
            i++;
        }
    }

    printf("\n");
    return 0;
}
