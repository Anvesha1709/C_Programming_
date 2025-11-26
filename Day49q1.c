//Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
#include <stdio.h>
#include <ctype.h>  

int main() {
    char str[100];
    int i;

    
    printf("Enter a name: ");
    fgets(str, sizeof(str), stdin);

    
    if (str[0] != ' ' && str[0] != '\n') {
        printf("%c.", toupper(str[0]));
    }

    
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\n' && str[i+1] != '\0') {
            printf("%c.", toupper(str[i+1]));
        }
    }

    printf("\n");
    return 0;
}
