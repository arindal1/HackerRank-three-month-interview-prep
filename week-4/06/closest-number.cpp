    int n = arr.size();
    sort(arr.begin(), arr.end()); // Sort the array in ascending order
    
    int minDiff = numeric_limits<int>::max(); // Initialize minimum difference to maximum value
    vector<int> closestPairs; // Vector to store closest pairs
    
    // Find the minimum difference between adjacent elements
    for (int i = 0; i < n - 1; ++i) {
        int diff = arr[i + 1] - arr[i]; // Calculate the difference between adjacent elements
        
        // If the difference is less than the current minimum difference, update the minimum difference
        if (diff < minDiff) {
            minDiff = diff;
            closestPairs.clear(); // Clear the vector since we found a smaller difference
            closestPairs.push_back(arr[i]); // Add the current pair to the vector
            closestPairs.push_back(arr[i + 1]);
        } else if (diff == minDiff) { // If the difference is equal to the minimum difference, add the pair to the vector
            closestPairs.push_back(arr[i]);
            closestPairs.push_back(arr[i + 1]);
        }
    }
    
    return closestPairs; // Return the vector containing closest pairs
}
