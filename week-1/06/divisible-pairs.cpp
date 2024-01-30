#include <iostream>
#include <vector>

using namespace std;

int countPairsDivisibleByK(const vector<int>& a, int k) {
    int count = 0;
    int n = a.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((a[i] + a[j]) % k == 0) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int a_i = 0; a_i < n; a_i++) {
        cin >> a[a_i];
    }
    cout << countPairsDivisibleByK(a, k) << endl;
    return 0;
}
