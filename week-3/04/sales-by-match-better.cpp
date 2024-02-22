int sockMerchant(int n, vector<int> ar) {
    unordered_set<int> set;
    int pairs = 0;
    for(int i = 0; i < n; i++) {
        auto it = set.find(ar[i]);
        if (it == set.end())
            set.insert(ar[i]);
        else {
            set.erase(it);
            pairs++;
        }
    }
    return pairs;
}
