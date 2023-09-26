#include <stdio.h>

int main() {
    FILE *file;
    int int_number; 
    float float_number; 
    int number[10]; //array to store the count of each of the respective number's occurrences

    for (int i = 0; i < 10; ++i) { //zero out the array
        number[i] = 0;
    }

    file = fopen("numbers.bin", "rb"); 
    if (file == NULL) {
        printf("Could not open file for reading.\n");
        return 1;
    }

    // Read until reaching the end of the file, setting the array values
    while (fread(&int_number, sizeof(int), 1, file) == 1) {
        number[int_number]++;
    }

    for (int i = 0; i < 10; ++i) {
        printf("%d: %d\n", i, number[i]);
    }
    fclose(file);  // Close the input file

    file = fopen("bins.bin", "wb");  // Open the output for writing in binary mode
    if (file == NULL) {
        printf("Could not open file for writing.\n");
        return 1;
    }

    for (int i = 0; i < 10; ++i) {
        fwrite(&number[i], sizeof(float), 1, file);
    }

    fclose(file);  // Close the output file
    return 0;
}