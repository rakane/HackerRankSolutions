int min(int x, int y) {
    return (x <= y) ? (x) : (y);
}

// Complete the minimumSwaps function below.
int minimumSwaps(int arr_count, int* arr) {
    if(arr_count == 0 || arr_count == 1) {
        return 0;
    }

    int lastIndex = arr_count - 1;
    int numSwaps = 0;
    int temp, minIndex;

    // Loop through array
    for(int i = 0; i < arr_count; i++) {
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
