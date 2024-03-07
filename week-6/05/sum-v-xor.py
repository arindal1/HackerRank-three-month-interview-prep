def sumXor(n):
    # Count the number of zeros in the binary representation of n starting from the third bit (index 2)
    # Explanation: The binary representation of n starts with '0b', followed by the binary digits.
    # The third bit (index 2) represents the first non-zero bit of n.
    # So, we start counting zeros from this position to avoid counting leading zeros.
    zero_count = bin(n)[3:].count("0")
    
    # Calculate the number of possible combinations that satisfy the conditions
    # Explanation: For each zero in the binary representation of n, we can either have '0' or '1' in that position
    # in the second number to maintain the same result for XOR and addition operations.
    # So, the total number of combinations is 2^zero_count.
    return 2 ** zero_count
