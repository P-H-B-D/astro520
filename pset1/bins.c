#include <stdio.h>

int main() {
    FILE *file;
    int int_number; // For reading an integer
    float float_number; // For storing the integer as a float
    int number[10]; // For storing the number of occurrences of each digit

    for (int i = 0; i < 10; ++i) { //zero out the array
        number[i] = 0;
    }

    file = fopen("numbers.bin", "rb");  // Open the file for reading in binary mode
    if (file == NULL) {
        printf("Could not open file for reading.\n");
        return 1;
    }

    // Read until reaching the end of the file
    while (fread(&int_number, sizeof(int), 1, file) == 1) {
        number[int_number]++;
        // printf("%d\n", (int)int_number);
    }

    for (int i = 0; i < 10; ++i) {
        printf("%d: %d\n", i, number[i]);
    }
    fclose(file);  // Close the file



    file = fopen("bins.bin", "wb");  // Open the file for writing in binary mode
    if (file == NULL) {
        printf("Could not open file for writing.\n");
        return 1;
    }

    for (int i = 0; i < 10; ++i) {
        fwrite(&number[i], sizeof(float), 1, file);
    }

    fclose(file);  // Close the file
    return 0;
}