vector<int> rotateLeft(int d, vector<int> arr) {
    int n = arr.size(), mod = d % n, c = 0;
    vector<int> ans;
    
    for (int i = 0; i < n; i++) {
        c = (arr[(mod + i) % n]);
        ans.push_back(c);
    }
    return ans;
}
