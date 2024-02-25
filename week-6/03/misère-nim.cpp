// Function to determine the winner of the Misère Nim game
string misereNim(vector<int> s) {
    
    long res = 0;   // Stores the XOR of all elements in the vector
    long c = 0;     // Counts the number of elements equal to 1
    long n = s.size(); // Stores the size of the vector
    long x;         // Temporary variable to store the current element of the vector
    
    // Iterate over each element of the vector
    for (int i = 0; i < n; ++i) {
        x = s[i];   // Get the current element
        // If the current element is equal to 1, increment the count
        if (x == 1)
            ++c;
        // XOR the current element with 'res'
        res ^= x;
    }
    
    // If all elements in the vector are equal to 1
    if (c == n)
        // Determine the winner based on whether the count 'c' is odd or even
        return (c & 1) ? "Second" : "First";
    else
        // If not all elements are equal to 1, determine the winner based on whether the XOR 'res' is greater than 0
        return (res > 0) ? "First" : "Second";
}
