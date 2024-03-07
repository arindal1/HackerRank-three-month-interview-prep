def counterGame(n):
    # Convert the integer n to its binary representation and remove the '0b' prefix
    binary = bin(n)[2:]
    
    # Count the number of '1's in the binary representation
    ones = len([i for i in binary if i == "1"])
    
    # Count the number of trailing '0's in the binary representation
    right_zeros = len(binary) - len(binary.rstrip("0"))
    
    # Determine the winner based on the number of '1's and trailing '0's
    return "Louise" if (ones + right_zeros - 1) % 2 else "Richard"
