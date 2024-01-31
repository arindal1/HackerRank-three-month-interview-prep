#include <iostream>
#include <vector>

using namespace std;

int lonelyInteger(vector<int>& a) {
    int result = 0;
    for (int num : a) {
        result ^= num;
    }
    return result;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int lonelyNum = lonelyInteger(arr);
    cout << lonelyNum << endl;

    return 0;
}
