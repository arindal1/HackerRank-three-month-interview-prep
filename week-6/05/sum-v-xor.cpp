long sumXor(long n) {
    long num_zeroes = 0;
    while (n > 0) {
        if ((n & 1) == 0) {
            num_zeroes++;
        }
        n >>= 1;
    }
    return pow(2, num_zeroes);
}

/*
The logic behind the function `sumXor` is as follows:

1. We want to find the number of non-negative integers `i` such that `(i & n) = 0`, where `&` represents the bitwise AND operation.
2. To do this, we need to count the number of zeros in the binary representation of `n`. This is because for each zero in the binary representation of `n`, we can either have '0' or '1' in that position in the integer `i` to satisfy the condition `(i & n) = 0`.
3. If a bit in the binary representation of `n` is 0, it means that it can be paired with either 0 or 1 in the corresponding position in `i`.
4. If a bit in the binary representation of `n` is 1, it must be paired with 0 in the corresponding position in `i` to satisfy the condition `(i & n) = 0`.
5. Therefore, the number of possible combinations of `i` that satisfy the condition `(i & n) = 0` is equal to 2 raised to the power of the number of zeros in the binary representation of `n`.
6. The function calculates the number of zeros in the binary representation of `n` and returns `2` raised to the power of that count.

In summary, the function `sumXor` calculates the number of non-negative integers `i` such that `(i & n) = 0` by counting the number of zeros in the binary representation of `n` and returning `2` raised to the power of that count.
*/
