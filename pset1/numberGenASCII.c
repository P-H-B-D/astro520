#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    FILE *file;
    srand(time(0));  // Initialize random number generator.
    
    int number=1000000000; // One billion

    clock_t start_time = clock();  // Record the start time

    file = fopen("numbers.txt", "w");  // Open the file for writing
    if (file == NULL) {
        printf("Could not open file for writing.\n");
        return 1;
    }

    for (int i = 0; i < number; ++i) {
        int random_num = rand();
        fprintf(file, "%d\n", random_num);  // Write each integer followed by a new line
    }

    fclose(file);  // Close the file

    clock_t end_time = clock();  // Record the end time

    // Calculate the elapsed time in milliseconds
    double elapsed_time_ms = (double)(end_time - start_time) * 1000 / CLOCKS_PER_SEC;
    
    printf("Ascii Mode. Numbers generated: %i, Elapsed time: %.2f milliseconds\n", number, elapsed_time_ms);

    return 0;
}