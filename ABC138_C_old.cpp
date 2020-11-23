// 順列全探索したらTLE
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> v(N);
  for (int i = 0; i < N; i++) cin >> v.at(i);

  vector<int> order(N);
  for (int i = 0; i < N; ++i) order.at(i) = i;

  // 探索
  double ans = 0;
  do {
    // for (int i = 0; i < N; ++i) cout << order.at(i) << " ";
    // cout << endl;

    double tmp = 0;
    for (int i = 1; i < N; i++) {
      if (i == 1) {
        tmp = (v.at(order.at(i - 1)) + v.at(order.at(i))) / 2.0;
      } else {
        tmp = (tmp + v.at(order.at(i))) / 2.0;
      }
    }

    // cout << ans << " " << tmp << endl;
    ans = max(ans, tmp);

  } while (next_permutation(order.begin(), order.end()));

  cout << fixed << setprecision(6) << ans << endl;
}