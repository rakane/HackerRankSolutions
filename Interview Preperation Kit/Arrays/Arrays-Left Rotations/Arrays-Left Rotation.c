// Complete the rotLeft function below.

// Please store the size of the integer array to be returned in result_count pointer. For example,
// int a[3] = {1, 2, 3};
//
// *result_count = 3;
//
// return a;
//
int* rotLeft(int a_count, int* a, int d, int* result_count) {
    *result_count = a_count;

    if(a_count == 0 || a_count == 1) {
        return a;
    }

    int temp;

    for(int i = 0; i < d; i++) {
        temp = a[0];
        for(int j = 0; j < a_count - 1; j++) {
            a[j] = a[j + 1];
        }
        a[a_count - 1] = temp;
    }

    for(int i = 0; i < a_count; i++) {
        printf("%d ", a[i]);
    }

    return a;
}
