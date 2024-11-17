#include <stdio.h>

int main() {
    int rows, cols;

    // Input the dimensions of the matrix
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    // Input the elements of the matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Step 1: Identify the unique distinct values
    int distinctValues[100];  // A simple array to hold the distinct values
    int distinctCount = 0;
    int found;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            found = 0;
            // Check if the value is already in the distinctValues array
            for (int k = 0; k < distinctCount; k++) {
                if (matrix[i][j] == distinctValues[k]) {
                    found = 1;
                    break;
                }
            }
            // If not found, add it to the distinctValues array
            if (!found) {
                distinctValues[distinctCount++] = matrix[i][j];
            }
        }
    }

    // Step 2: Print the positions of the distinct values (based on first occurrences)
    int positionsPrinted = 0;  // To keep track of how many distinct positions we've printed
    for (int i = 0; i < distinctCount; i++) {
        int currentValue = distinctValues[i];
        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {
                if (matrix[r][c] == currentValue) {
                    printf("%d %d\n", r + 1, c + 1);  // Print 1-based position
                    positionsPrinted++;
                    break;
                }
            }
            if (positionsPrinted > i) {
                break;
            }
        }
    }

    // Step 3: Print the number of distinct positions printed
    printf("%d\n", positionsPrinted);

    return 0;
}
