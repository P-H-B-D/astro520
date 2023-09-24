#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));  // Initialize random number generator.
    printf("RAND_MAX is: %d\n", RAND_MAX);  // Print the value of RAND_MAX

    clock_t start_time = clock();  // Record the start time

    for (int i = 0; i < 10000000; i++) {
        int random_num = rand();
        printf("Random number %d: %d\n", i + 1, random_num);
    }

    clock_t end_time = clock();  // Record the end time

    // Calculate the elapsed time in milliseconds
    double elapsed_time_ms = (double)(end_time - start_time) * 1000 / CLOCKS_PER_SEC;
    
    printf("Elapsed time: %.2f milliseconds\n", elapsed_time_ms);

    return 0;
}
