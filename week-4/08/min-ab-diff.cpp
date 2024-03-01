// Function to find the minimum absolute difference between any two elements in a vector
int minimumAbsoluteDifference(vector<int> arr) {
    int ans = 2000000001, n = arr.size(); // Initialize the minimum difference to a large value
    sort(arr.begin(), arr.end()); // Sort the array in ascending order

    // Iterate through the sorted array to find the minimum absolute difference
    for(int i = 1; i < n; i++) {
        if(arr[i] - arr[i - 1] < ans) // If the difference between adjacent elements is less than the current minimum difference
            ans = arr[i] - arr[i - 1]; // Update the minimum difference
    }
    return ans; // Return the minimum absolute difference
}
