#include <stdio.h>

int main() {
    int int_number;  
    float runningSum = 0;
    int count = 0;

    size_t readSize;  // To check the number of items read

    while (1) {
        readSize = fread(&int_number, sizeof(int), 1, stdin);  // Read a binary integer
        if (readSize != 1) {  // Check if end-of-file or error occurred
            if (feof(stdin)) {  // End-of-file
                break;
            } else {  
                printf("An error occurred while reading.\n");
                return 1;
            }
        }
        runningSum += (float)int_number;
        count++;
        printf("Average: %f\n", runningSum / count);
    }

    if (count == 0) {
        printf("No numbers were entered.\n");
        return 0;
    }

    printf("Count: %d\n", count); 
    printf("Average: %f\n", runningSum / count);  

    return 0;
}
