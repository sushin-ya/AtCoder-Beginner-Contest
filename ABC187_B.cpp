#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, ans = 0;
  cin >> N;
  vector<pair<int, int>> xy(N);
  for (int i = 0; i < N; i++) {
    int x, y;
    cin >> x >> y;
    xy.at(i).first = x;
    xy.at(i).second = y;
  }

  for (int i = 0; i < N - 1; i++) {
    for (int j = i + 1; j < N; j++) {
      double k = (1.0 * (xy.at(j).second - xy.at(i).second)) /
                 (xy.at(j).first - xy.at(i).first);
      if (k >= -1 && k <= 1) {
        ++ans;
      }
    }
  }

  cout << ans << endl;
}