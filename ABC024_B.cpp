#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, T, ans = 0;
  cin >> N >> T;
  vector<int> a(N);
  for (int i = 0; i < N; i++) cin >> a.at(i);
  for (int i = 1; i < N; i++) {
    if (a.at(i) - a.at(i - 1) < T)
      ans += a.at(i) - a.at(i - 1);
    else
      ans += T;
  }
  ans += T;
  cout << ans << endl;
}