int* missingNumbers(int arr_count, int* arr, int brr_count, int* brr, int* result_count) {
    // Calculate the maximum possible size of the result array
    int max_size = arr_count + brr_count;

    // Allocate memory for the result array
    int* result = (int*)malloc(max_size * sizeof(int));
    *result_count = 0;

    // Initialize the frequency array with zeros
    int cnt[22222] = {0};

    // Update frequency counts for arr
    for (int i = 0; i < arr_count; i++) {
        cnt[arr[i] + 10000]--;
    }

    // Update frequency counts for brr
    for (int i = 0; i < brr_count; i++) {
        cnt[brr[i] + 10000]++;
    }

    // Collect missing numbers
    for (int i = -10000; i <= 10000; i++) {
        if (cnt[i + 10000] > 0) {
            result[(*result_count)++] = i;
        }
    }

    return result;
}
