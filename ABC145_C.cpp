#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<pair<int, int>> xy(N);

  for (int i = 0; i < N; i++) {
    cin >> xy.at(i).first >> xy.at(i).second;
  }

  // 初期順列
  vector<int> order(N);
  for (int i = 0; i < N; ++i) order.at(i) = i;

  // 探索
  double ans = 0;
  int cnt = 0;
  do {
    for (int i = 1; i < N; i++) {
      ans += sqrt(
          pow(xy.at(order.at(i - 1)).first - xy.at(order.at(i)).first, 2.0) +
          pow(xy.at(order.at(i - 1)).second - xy.at(order.at(i)).second, 2.0));
    }
    cnt++;
  } while (next_permutation(order.begin(), order.end()));

  cout << fixed << setprecision(10) << ans / cnt << endl;
}