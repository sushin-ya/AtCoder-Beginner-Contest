#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> t(N), x(N), y(N);
  for (int i = 0; i < N; i++) cin >> t.at(i) >> x.at(i) >> y.at(i);

  if (x.at(0) + y.at(0) > t.at(0) || (x.at(0) + y.at(0)) % 2 != t.at(0) % 2) {
    cout << "No" << endl;
    return 0;
  }

  for (int i = 0; i < N - 1; i++) {
    int dx, dy, dt;
    dx = abs(x.at(i + 1) - x.at(i));
    dy = abs(y.at(i + 1) - y.at(i));
    dt = t.at(i + 1) - t.at(i);
    if (dx + dy > dt) {
      cout << "No" << endl;
      return 0;
    } else {
      if ((dx + dy) % 2 == dt % 2) {
        continue;
      } else {
        cout << "No" << endl;
        return 0;
      }
    }
  }
  cout << "Yes" << endl;
  return 0;
}