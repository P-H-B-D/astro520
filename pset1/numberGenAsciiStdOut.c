#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    srand(time(0));  // Initialize random number generator.

    int number = 1000; // Ten million
    // int number = 1000000000; // Uncomment to actually print one billion numbers


    for (int i = 0; i < number; ++i) {
        int random_num = rand() % 10;  // Generate random number between 0 and 9
        fwrite(&random_num, sizeof(int), 1, stdout);  // Write each integer to stdout in binary form
    }

    return 0;
}
