#include <stdio.h>

int main() {
    int n, i, min1, min2;
    
    // Read the number of elements in the array
    scanf("%d", &n);
    
    int arr[n];
    
    // Read the array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Initialize min1 and min2 to large values
    min1 = min2 = 1000000;
    
    // Find the smallest and second smallest elements
    for (i = 0; i < n; i++) {
        if (arr[i] < min1) {
            min2 = min1;
            min1 = arr[i];
        } else if (arr[i] < min2 && arr[i] != min1) {
            min2 = arr[i];
        }
    }
    
    // Print the two smallest numbers
    printf("%d %d\n", min1, min2);
    
    return 0;
}
