def validate(s, first):
    while s:
        if s.startswith(first):
            s = s[len(first):]
            first = str(int(first) + 1)
        else:
            return False
    return True

def separateNumbers(s):
    if s[0] == '0' and len(s) > 1:
        return "NO"
    else:
        for ind in range(1, len(s)//2 + 1):
            first = s[:ind]
            if validate(str(s), first):
                return "YES " + first
    return "NO"
