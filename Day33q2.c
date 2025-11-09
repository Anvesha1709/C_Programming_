//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include <stdio.h>

int main() {
    int n, key, i, j;
    
    
    scanf("%d", &n);
    int arr[n + 1];  
    
    
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    
    scanf("%d", &key);
    

    for(i = 0; i < n; i++) {
        if(key < arr[i])
            break;
    }
    
    
    for(j = n; j > i; j--) {
        arr[j] = arr[j - 1];
    }
    
    
    arr[i] = key;
    n++; 
    
    
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
