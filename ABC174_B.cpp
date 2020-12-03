#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, D;
  cin >> N >> D;
  int ans = 0;
  for (int i = 0; i < N; i++) {
    int64_t x, y;
    cin >> x >> y;
    // cout << sqrt(x * x + y * y) << endl;
    if (sqrt(x * x + y * y) <= D) ans++;
  }
  cout << ans << endl;
}