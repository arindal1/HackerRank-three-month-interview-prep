int max(int a, int b) {
    return (a > b) ? a : b;
}

int pickingNumbers(int arr[], int n) {
    qsort(arr, n, sizeof(int), cmpfunc);

    int result = 0, count = 1;
    int subarray_first_element = arr[0];

    for (int i = 1; i < n; ++i) {
        if (subarray_first_element == arr[i] || subarray_first_element + 1 == arr[i])
            count++;
        else {
            result = max(result, count);
            count = 1;
            subarray_first_element = arr[i];
        }
    }

    result = max(result, count);
    return result;
}
