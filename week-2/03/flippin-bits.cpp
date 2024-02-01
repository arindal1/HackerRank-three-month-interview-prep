#include <iostream>
using namespace std;

typedef long long ll;

ll calculateDifference(ll cur) {
  ll val = 4294967295L;
  return val - cur;
}
        
int main() {
  int T;
  cin >> T;
  for (int t = 0; t < T; ++t) {
    ll cur;
    cin >> cur;
    cout << calculateDifference(cur) << endl;
  }
  return 0;
}
