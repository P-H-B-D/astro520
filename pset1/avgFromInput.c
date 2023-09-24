#include <stdio.h>

int main() {
    int int_number; // For reading an integer
    float float_number; // For storing the integer as a float

    // Initialize variables for the running average
    float runningSum = 0;
    int count = 0;

    while (scanf("%d", &int_number) != EOF) {
        // Update running average
        runningSum = runningSum + (float)int_number;
        count++;

        // printf("Running Sum: %f\n", runningSum);  // Print the running sum
        printf("Average: %f\n", runningSum / count);  // Print the running average
    }

    if(count == 0) {
        printf("No numbers were entered.\n");
        return 0;
    }

    printf("Count: %d\n", count);  // Print the count
    printf("Average: %f\n", runningSum / count);  // Print the average

    return 0;
}
