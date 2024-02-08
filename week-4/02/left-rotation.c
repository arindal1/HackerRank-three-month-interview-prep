int* rotateLeft(int d, int arr[], int n) {
    int mod = d % n;
    int* ans = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        ans[i] = arr[(mod + i) % n];
    }
    return ans;
}
