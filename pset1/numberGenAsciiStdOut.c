#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));  // Initialize random number generator.
    int number = 1000000000; 

    for (int i = 0; i < number; ++i) {
        int random_num = rand() % 10;  // Generate random number between 0 and 9
        fprintf(stdout, "%d\n", random_num);  // Write each integer followed by a new line to stdout
    }
    
    return 0;
}
