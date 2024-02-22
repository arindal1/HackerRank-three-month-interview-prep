int pageCount(int n, int p) {
    int tot_pages = (n + 2)/2;
    int front = (p + 2)/2 - 1;
    int back = tot_pages - front - 1;
    int ans = min(front, back);
    return ans;
}
