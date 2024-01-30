#include <iostream>
#include <map>
#include <string>

using namespace std;

void processQueries(int n) {
    map<string, int> mp;
    string t;
    while (n--) {
        cin >> t;
        mp[t]++;
    }
    int a;
    cin >> a;
    while (a--) {
        cin >> t;
        cout << mp[t] << endl;
    }
}

int main() {
    int n;
    cin >> n;
    processQueries(n);
    return 0;
}
