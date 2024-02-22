string balancedSums(vector<int> arr) {
    int sum = 0;
    for (int num : arr) {
        sum += num;
    }
    int leftSum = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (leftSum == sum - leftSum - arr[i])
            return "YES";
        leftSum += arr[i];
    }
    return "NO";
}
