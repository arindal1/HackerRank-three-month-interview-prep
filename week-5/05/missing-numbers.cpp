vector<int> missingNumbers(vector<int> arr, vector<int> brr) {
    unordered_map<int, int> freqBrr;
    for (int num : brr) {
        freqBrr[num]++;
    }
    for (int num : arr) {
        freqBrr[num]--;
    }
    vector<int> missingNums;
    for (const auto& pair : freqBrr) {
        if (pair.second > 0) {
            missingNums.push_back(pair.first);
        }
    }
    sort(missingNums.begin(),missingNums.end());
    return missingNums;
}
