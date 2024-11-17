#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Frequency array (assuming values are between 0 and 100,000)
    int freq[100001] = {0};  // Adjust the range if necessary

    // Count the frequency of each element
    for (int i = 0; i < n; i++) {
        freq[a[i]]++;
    }

    int count = 0;
    
    // Count how many elements have exactly one occurrence
    for (int i = 0; i < 100001; i++) {
        if (freq[i] == 1) {
            count++;
        }
    }

    // Print the result
    printf("%d\n", count);

    return 0;
}
