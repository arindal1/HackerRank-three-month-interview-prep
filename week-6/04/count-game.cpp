string counterGame(long n) {
    bool ric = true;  // Initialize a boolean variable to keep track of Richard's turn
    for (long m = n - 1; m != 0; m >>= 1) {  // Iterate through each binary digit of n except the most significant one
        if ((m & 1) == 1) ric = !ric;  // If the current binary digit is 1, toggle the turn
    }
    return ric ? "Richard" : "Louise";  // Return the winner based on the final turn
}
