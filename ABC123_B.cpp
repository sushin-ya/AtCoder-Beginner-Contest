#include <bits/stdc++.h>
using namespace std;

int main() {
  int n = 5;
  vector<int> t(n);
  for (int i = 0; i < n; i++) cin >> t.at(i);

  // 初期順列
  int ans = 1000;
  vector<int> order(n);
  for (int i = 0; i < n; ++i) order.at(i) = i;

  // 探索
  do {
    int res = 0;
    for (int i = 0; i < n; i++) {
      res += t.at(order.at(i));
      //   cout << i << " " << t.at(order.at(i)) << " " << res << " ";
      if (i != n - 1 && res % 10 != 0) {
        res += 10 - res % 10;
      }
      //   cout << res << endl;
    }
    ans = min(ans, res);
  } while (next_permutation(order.begin(), order.end()));
  cout << ans << endl;
}