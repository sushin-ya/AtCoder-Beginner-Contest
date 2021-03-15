#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, S, T, W, ans = 0;
  cin >> N >> S >> T >> W;
  if (W >= S && W <= T) ++ans;
  for (int i = 0; i < N - 1; i++) {
    int a;
    cin >> a;
    W += a;
    if (W >= S && W <= T) ++ans;
  }
  cout << ans << endl;
}
