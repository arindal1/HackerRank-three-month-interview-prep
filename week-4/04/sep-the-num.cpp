bool separateNumbers(string s) {
    // If the first character is '0' and the string length is greater than 1, it cannot be separated
    if (s[0] == '0') {
        cout << "NO\n"; // Print NO and return false
        return false;
    }
    long long now = 0; // Variable to store the current number being formed
    bool st = false; // Flag to indicate if separation is successful

    // Loop through each character in the string
    for (size_t i = 0; i < s.size(); ++i) {
        now = now * 10 + s[i] - '0'; // Update the current number by appending the current digit

        long long res = 0; // Variable to store the number formed by consecutive digits

        // If the next character is '0', skip to the next iteration
        if (s[i + 1] == '0') {
            continue;
        }
        int cnt = 1; // Counter for consecutive numbers

        // Loop through the remaining characters in the string
        for (size_t j = i + 1; j < s.size(); ++j) {
            res = res * 10 + s[j] - '0'; // Update the number formed by consecutive digits

            // If the current number matches the expected consecutive number
            if (res == now + cnt) {
                // If this is the last character in the string, set the flag to true and break the loop
                if (j + 1 == s.size()) {
                    st = true;
                    break;
                }
                // If the next character is '0', break the loop
                if (s[j + 1] == '0') {
                    break;
                }
                res = 0; // Reset the number formed by consecutive digits
                ++cnt; // Increment the counter for consecutive numbers
            }
        }
        // If separation is successful, set the flag to true and break the loop
        if (st) {
            break;
        }
    }
    // If separation is successful, print YES and the starting number, otherwise print NO
    if (st) {
        cout << "YES " << now << endl;
        return true;
    } else {
        cout << "NO\n";
        return false;
    }
}
