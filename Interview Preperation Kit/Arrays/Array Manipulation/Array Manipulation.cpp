// UNFINISHED: Fails 7 test cases
// Complete the arrayManipulation function below.
long arrayManipulation(int n, vector<vector<int>> queries) {
    // Initialize and fill vector
    vector<long> zeros;
    zeros.emplace_back(0);
    for(int i = 1; i < n; i++) {
        zeros.push_back(0);
    }

    int numQueries = queries.size();
    long max = -100000;

    // Loop queries
    for(int qRow = 0; qRow < numQueries; qRow++) {
        // Loop indices and increment
        for(int i = queries[qRow][0]; i <= queries[qRow][1]; i++) {
            zeros[i - 1] += queries[qRow][2];
        }
    }

    // Loop and find max
    for(int i = 0; i < n; i++) {
        if(zeros[i] > max) {
            max = zeros[i];
        }
    }

    return max;
}
