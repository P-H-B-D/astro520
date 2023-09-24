#include <stdio.h>

int main() {
    FILE *file;
    int int_number; // For reading an integer

    file = fopen("numbers.bin", "rb");  // Open the file for reading in binary mode
    if (file == NULL) {
        printf("Could not open file for reading.\n");
        return 1;
    }

    // Initialize variables for the running average
    float runningSum=0;
    int count=0;

    while (fread(&int_number, sizeof(int), 1, file) == 1) {
        // Update running average
        runningSum = runningSum + (float)int_number;
        count++;

        printf("%f\n", runningSum);  // Print the running average
    }
    printf("Count: %d\n", count);  // Print the running average
    printf("Average: %f\n", runningSum/count);  // Print the running average

    fclose(file);  // Close the file
    return 0;
}
