int birthday(vector<int> s, int d, int m) {
    int n = s.size(), ans = 0;
    vector<int> prefixSum(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        prefixSum[i] = prefixSum[i - 1] + s[i - 1];
    }

    for (int i = m; i <= n; i++) {
        if (prefixSum[i] - prefixSum[i - m] == d) {
            ans++;
        }
    }
    return ans;
}
