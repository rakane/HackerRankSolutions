// Complete the minimumBribes function below.
void minimumBribes(vector<int> q) {
    int numBribes = 0;

    // Loop from back of line to front
    for (int i = q.size() - 1; i >= 0; i--) {
        // if person has moved more than 2 positions forward
        if (q[i] - (i + 1) > 2) {
            cout << "Too chaotic" << endl;
            return;
        }
        // Checks the two spots in front of person for swaps, or 0 if going out of bounds
        for (int j = max(0, q[i] - 2); j < i; j++) {
            // if position was swapped
            if (q[j] > q[i]){
                numBribes++;
            }
        }
    }
    cout << numBribes << endl;
}
