#include <iostream>
#include <vector>
using namespace std;

int countPairs(int n, vector<int>& c) {
    int ans = 0;
    for (int i = 1; i <= 100; ++i) {
        ans += c[i] / 2;
    }
    return ans;
}

int main() {
    int n;
    scanf("%d", &n);
    
    vector<int> c(105, 0);
    for (int i = 1, x; i <= n; ++i) {
        scanf("%d", &x);
        c[x]++;
    }

    int ans = countPairs(n, c);
    printf("%d\n", ans);

    return 0;
}
