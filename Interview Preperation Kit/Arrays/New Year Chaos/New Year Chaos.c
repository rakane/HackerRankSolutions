// Helper function for max value of two integers
int max(int x, int y) {
    return (x >= y) ? (x) : (y);
}

// Complete the minimumBribes function below.
void minimumBribes(int q_count, int* q) {
    int numBribes = 0;

    // Loop from back of line to front
    for(int i = q_count - 1; i >= 0; i--) {
        // if person has moved more than 2 positions forward
        if(q[i] - (i + 1) > 2) {
            printf("Too chaotic\n");
            return;
        }

        // Checks the two spots in front of person for swaps, or 0 if going out of bounds
        for(int j = max(0, q[i] - 2); j < i; j++) {
            if(q[j] > q[i]) {
                // if position was swapped
                numBribes++;
            }
        }

    }

    printf("%d\n", numBribes);

}
