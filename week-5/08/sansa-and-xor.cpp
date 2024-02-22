
int sansaXor(vector<int> arr) {
    int ans = 0, n = arr.size();
    
    for (int i = 0; i < n; ++i) {
        if ((i+1) * (n-i) % 2 != 0) {
            ans ^= arr[i];
        }
    }
    return ans;
}
