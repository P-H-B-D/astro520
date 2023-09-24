#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));  // Initialize random number generator.

    int number = 1000; // Ten million
    // int number = 1000000000; // Uncomment to actually print one billion numbers

    clock_t start_time = clock();  // Record the start time

    for (int i = 0; i < number; ++i) {
        int random_num = rand() % 10;  // Generate random number between 0 and 9
        fwrite(&random_num, sizeof(int), 1, stdout);  // Write each integer to stdout in binary form
    }

    clock_t end_time = clock();  // Record the end time

    // Calculate the elapsed time in milliseconds
    double elapsed_time_ms = (double)(end_time - start_time) * 1000 / CLOCKS_PER_SEC;
    
    // fprintf(stdout, "Numbers generated between 0 and 9. Numbers generated: %i, Elapsed time: %.2f milliseconds\n", number, elapsed_time_ms);

    return 0;
}
