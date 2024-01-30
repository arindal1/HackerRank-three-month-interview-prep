#include <stdio.h>

int countPairsDivisibleByK(int* a, int n, int k) {
    int count = 0;
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
    scanf("%d %d", &n, &k);
    int a[n];
    for (int a_i = 0; a_i < n; a_i++) {
        scanf("%d", &a[a_i]);
    }
    printf("%d\n", countPairsDivisibleByK(a, n, k));
    return 0;
}
