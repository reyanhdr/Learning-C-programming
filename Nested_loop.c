#include <stdio.h>
#include <math.h>

#define MAX_DATA_POINTS 100

int main() {
    int n, i;
    float data[MAX_DATA_POINTS];
    float sum = 0, mean, median, mode, std_dev = 0, mean_dev = 0;

    // Input data
    printf("Enter the number of data points: ");
    scanf("%d", &n);

    printf("Enter the data points:\n");
    for (i = 0; i < n; i++) {
        scanf("%f", &data[i]);
        sum += data[i];
    }

    // Calculate mean
    mean = sum / n;

    // Calculate median
    if (n % 2 == 0) {
        median = (data[(n - 1) / 2] + data[n / 2]) / 2;
    } else {
        median = data[n / 2];
    }

    // Calculate mode (assuming only one mode exists)
    int max_count = 0;
    mode = data[0];
    for (i = 1; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (data[i] == data[j]) {
                count++;
            }
        }
        if (count > max_count) {
            max_count = count;
            mode = data[i];
        }
    }

    // Calculate standard deviation
    for (i = 0; i < n; i++) {
        std_dev += pow(data[i] - mean, 2);
    }
    std_dev = sqrt(std_dev / n);

    // Calculate mean deviation
    for (i = 0; i < n; i++) {
        mean_dev += fabs(data[i] - mean);
    }
    mean_dev /= n;

    // Print results
    printf("Mean: %.2f\n", mean);
    printf("Median: %.2f\n", median);
    printf("Mode: %.2f\n", mode);
    printf("Standard Deviation: %.2f\n", std_dev);
    printf("Mean Deviation: %.2f\n", mean_dev);

    return 0;
}