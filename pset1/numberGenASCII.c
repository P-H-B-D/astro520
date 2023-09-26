#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    FILE *file;
    srand(time(0));  
    
    int number = 1000000000;

    clock_t start_time = clock();  //start time

    file = fopen("numbers.txt", "w"); 
    if (file == NULL) {
        printf("Could not open file for writing.\n");
        return 1;
    }

    for (int i = 0; i < number; ++i) {
        int random_num = rand() % 10; // Generate random number between 0 and 9
        fprintf(file, "%d\n", random_num);  // Write each integer followed by a new line
    }

    fclose(file);  // Close the file

    clock_t end_time = clock();  // Record the end time

    // Calculate the elapsed time (ms)
    double elapsed_time_ms = (double)(end_time - start_time) * 1000 / CLOCKS_PER_SEC;
    
    printf("Numbers generated between 0 and 9. Numbers generated: %i, Elapsed time: %.2f milliseconds\n", number, elapsed_time_ms);

    return 0;
}
