// Complete the rotLeft function below.
vector<int> rotLeft(vector<int> a, int d) {
    if(a.empty() || a.size() <= 1) {
        return a;
    }

    int temp;

    for(int i = 0; i < d; i++) {
        temp = a[0];
        for(int j = 0; j < a.size() - 1; j++) {
            a[j] = a[j + 1];
        }
        a[a.size() - 1] = temp;
    }

    return a;
}
