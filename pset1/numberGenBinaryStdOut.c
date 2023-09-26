#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    FILE *file;
    srand(time(0));  // Initialize random number generator.
    
    int number = 1000000000; // One billion

    clock_t start_time = clock();  // Record the start time

    file = fopen("numbers.bin", "wb");  // Open the file for writing in binary mode
    if (file == NULL) {
        printf("Could not open file for writing.\n");
        return 1;
    }

    for (int i = 0; i < number; ++i) {
        int random_num = rand() % 10 ;
        fwrite(&random_num, sizeof(int), 1, stdout);  // Write each integer
    }

    fclose(file);  // Close the file

    clock_t end_time = clock();  // Record the end time

    // Calculate the elapsed time in milliseconds
    double elapsed_time_ms = (double)(end_time - start_time) * 1000 / CLOCKS_PER_SEC;
    
    printf("Binary Mode (fwrite). Numbers generated: %i, Elapsed time: %.2f milliseconds\n", number, elapsed_time_ms);

    return 0;
}
