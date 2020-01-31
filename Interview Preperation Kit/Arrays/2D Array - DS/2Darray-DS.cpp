// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {
    int max = INT_MIN;

    for(int row = 0; row < arr.size() - 2; row++) {
        for(int col = 0; col < arr[0].size() - 2; col++) {
            int sum = 0;
            sum = arr[row][col] + arr[row][col + 1] + arr[row][col + 2]
                    + arr[row + 1][col + 1] + arr[row + 2][col]
                    + arr[row + 2][col + 1] + arr[row + 2][col + 2];

            if(sum > max) {
                max = sum;
            }
        }
    }

    return max;

}
