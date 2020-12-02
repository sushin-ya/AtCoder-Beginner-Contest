#include <bits/stdc++.h>
using namespace std;

int main() {
  int X, N;
  cin >> X >> N;
  vector<int> p(102, 0);
  for (int i = 0; i < N; i++) {
    int num;
    cin >> num;
    p.at(num)++;
  }

  int ans = 0, d = 102;
  for (int i = 0; i < 102; i++) {
    if (!p.at(i)) {
      if (d > abs(X - i)) {
        d = abs(X - i);
        ans = i;
        // cout << ans << " " << d << endl;
      }
    }
  }
  cout << ans << endl;
}