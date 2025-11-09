//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>

int main() {
    long long num;
    int freq[10] = {0};  
    int digit, max = 0, most_freq = 0;

    
    scanf("%lld", &num);

    
    while(num > 0) {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    
    for(int i = 0; i < 10; i++) {
        if(freq[i] > max) {
            max = freq[i];
            most_freq = i;
        }
    }

    printf("%d", most_freq);

    return 0;
}
