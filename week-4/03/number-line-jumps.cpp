string kangaroo(int x1, int v1, int x2, int v2) {
    if ((v1 <= v2) || ((x2 - x1) % (v2 - v1)))
        return "NO";
    else
        return "YES";
}
