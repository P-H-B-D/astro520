#include <stdio.h>

int main() {
    FILE *file;
    int int_number; // For reading an integer
    float float_number; // For storing the integer as a float

    file = fopen("numbers.bin", "rb");  // Open the file for reading in binary mode
    if (file == NULL) {
        printf("Could not open file for reading.\n");
        return 1;
    }

    // Initialize variables for the running average
    float avg = 0;
    float count = 0;

    while (fread(&int_number, sizeof(int), 1, file) == 1) {
        // Update running average
        avg = (avg * count + int_number) / (count + 1);
        count++;

        printf("%f\n", avg);  // Print the running average
    }

    fclose(file);  // Close the file
    return 0;
}
