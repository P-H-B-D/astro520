#include <stdio.h>

int main() {
    int int_number; // For reading an integer

    // Initialize variables for the running average
    float runningSum = 0;
    int count = 0;

    while (scanf("%d", &int_number) != EOF) {
        // Update running average
        runningSum = runningSum + (float)int_number;
        count++;
        printf("Average: %f\n", runningSum / count);  
    }

    if(count == 0) {
        printf("No numbers were entered.\n");
        return 0;
    }

    printf("Count: %d\n", count);
    printf("Average: %f\n", runningSum / count);  

    return 0;
}
