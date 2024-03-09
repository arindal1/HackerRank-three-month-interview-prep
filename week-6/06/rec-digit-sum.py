def superDigit(n, k):
    # Write your code here
    res = sum(int(i) for i in str(n)) * k
    while res > 10:
        res = sum(int(i) for i in str(res))
    return res
