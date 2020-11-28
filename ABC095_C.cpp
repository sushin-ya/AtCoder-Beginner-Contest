#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C, X, Y;
  cin >> A >> B >> C >> X >> Y;

  int64_t ans;
  for (int i = 0; i < max(X, Y) * 2 + 1; i += 2) {  // ABピザを全探索
    int64_t cost = A * (X - i / 2 > 0 ? X - i / 2 : 0) +
                   B * (Y - i / 2 > 0 ? Y - i / 2 : 0) + C * i;

    if (i == 0) ans = cost;
    ans = min(ans, cost);
  }

  cout << ans << endl;
}