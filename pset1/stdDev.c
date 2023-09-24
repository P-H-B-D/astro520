#include <stdio.h>
#include <math.h> 

int main() {
    FILE *file;
    int int_number;
    int count = 0;

    file = fopen("numbers.bin", "rb");  // Open the file for reading in binary mode
    if (file == NULL) {
        printf("Could not open file for reading.\n");
        return 1;
    }

    // Initialize variables for the running average and cumulative squares
    float cumulativeSquare = 0;
    float runningSum = 0;

    while (fread(&int_number, sizeof(int), 1, file) == 1) {
        cumulativeSquare = cumulativeSquare + (float)int_number * (float)int_number;
        runningSum = runningSum + (float)int_number;
        count++;
    }

    // Calculate Mean
    float mean = runningSum / count;

    // Calculate Standard Deviation
    float stdDev = sqrt(cumulativeSquare / count - pow(mean, 2));

    printf("Count: %d\n", count);
    printf("Mean: %f\n", mean);
    printf("Standard Deviation: %f\n", stdDev);

    fclose(file);  // Close the file
    return 0;
}
