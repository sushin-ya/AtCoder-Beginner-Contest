#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, X, ans = 0;
  cin >> n >> X;
  vector<int> a(n);
  for (int i = 0; i < n; i++) cin >> a.at(i);
  bitset<20> s(X);
  for (int i = 0; i < n; i++) {
    if (s.test(i)) {
      ans += a.at(i);
    }
  }
  cout << ans << endl;
}