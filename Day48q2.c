//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    char temp[200];

    
    scanf("%s", str1);
    scanf("%s", str2);

    
    if (strlen(str1) != strlen(str2)) {
        printf("Not rotation\n");
        return 0;
    }


    strcpy(temp, str1);
    strcat(temp, str1);

    
    if (strstr(temp, str2) != NULL)
        printf("Rotation\n");
    else
        printf("Not rotation\n");

    return 0;
}
