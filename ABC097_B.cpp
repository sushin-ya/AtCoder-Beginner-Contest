#include <bits/stdc++.h>
using namespace std;

int main() {
  int X;
  cin >> X;
  int ans = 0;
  for (int b = 1; b < 1001; ++b) {
    for (int p = 2; p < 10; ++p) {
      int res = pow(b, p);
      if (res <= X) {
        ans = max(ans, res);
      }
    }
  }
  cout << ans << endl;
}