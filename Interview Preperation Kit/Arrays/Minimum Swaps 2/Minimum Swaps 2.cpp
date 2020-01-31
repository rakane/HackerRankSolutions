// Complete the minimumSwaps function below.
int minimumSwaps(vector<int> arr) {
    if(arr.empty() || arr.size() == 1) {
        return 0;
    }

    int lastIndex = arr.size() - 1;
    int numSwaps = 0;
    int temp, minIndex;

    // Loop through array
    for(int i = 0; i < arr.size(); i++) {
        // If index is less than expected since sequential
        if(i < arr[i] - 1) {
            // Find minimum of correct index or last index
            minIndex = min(lastIndex, arr[i] - 1);

            // Swap
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
            numSwaps++;
            // Decrement i since value changed
            i--;
        }
    }

    return numSwaps;
}
