#include <stdio.h>
#include <string.h>

int main() {
    char input[100];  // Array to store the user input string

    // Get the input string from the user
    scanf("%s", input);  // Read a word (no spaces) from the user

    int len = strlen(input);  // Find the length of the input string

    // If the string has fewer than 2 characters, we can't proceed with the comparison
    if (len < 2) {
        printf("0\n");  // Output 0 if the string is too short
        return 0;
    }

    // Get the first and last characters of the string
    char first = input[0];
    char last = input[len - 1];

    // If the first and last characters are different, output 0
    if (first != last) {
        printf("0\n");
        return 0;
    }

    int count = 0;  // Initialize a counter to track how many times the first or last character appears

    // Loop through the string
    for (int i = 0; i < len; i++) {
        // Count the occurrences of the first or last character
        if (input[i] == first || input[i] == last) {
            count++;
        }
    }

    // Output the final count (just the number)
    printf("%d\n", count);

    return 0;  // End the program
}
