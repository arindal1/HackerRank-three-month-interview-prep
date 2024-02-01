#include <iostream>
#include <algorithm>
using namespace std;

bool checkSums(int N, int K, int A[], int B[]) {
    sort(A, A + N);
    sort(B, B + N);
    for (int i = 0; i < N; ++i) {
        if (A[i] + B[N - 1 - i] < K) {
            return false;
        }
    }
    return true;
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int N, K;
        scanf("%d%d", &N, &K);
        int A[N], B[N];
        for (int i = 0; i < N; ++i)
            scanf("%d", &A[i]);
        for (int i = 0; i < N; ++i)
            scanf("%d", &B[i]);
        if (checkSums(N, K, A, B))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
