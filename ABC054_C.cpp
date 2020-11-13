#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<pair<int, int>> ab(M);
  for (int i = 0; i < M; i++) {
    cin >> ab.at(i).first >> ab.at(i).second;
  }

  // 初期順列
  vector<int> order(N - 1);
  for (int i = 0; i < N - 1; ++i) {
    int v = i;
    order.at(i) = v + 2;
  }

  // 探索
  int cnt = 0;
  do {
    int sum = 0;
    vector<int> new_order = {1};
    copy(order.begin(), order.end(), back_inserter(new_order));

    for (int i = 1; i < N; i++) {
      int x, y;
      x = min(new_order.at(i - 1), new_order.at(i));
      y = max(new_order.at(i - 1), new_order.at(i));

      for (int j = 0; j < M; j++) {
        if (x == ab.at(j).first && y == ab.at(j).second) {
          sum++;
          break;
        }
      }
    }

    if (sum == N - 1) {
      cnt++;
    }

  } while (next_permutation(order.begin(), order.end()));

  cout << cnt << endl;
}