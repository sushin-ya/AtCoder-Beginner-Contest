#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> H(N);
  vector<bool> res(N, true);
  for (int i = 0; i < N; i++) cin >> H.at(i);
  for (int i = 0; i < M; i++) {
    int a, b;
    cin >> a >> b;
    --a, --b;
    if (H.at(a) == H.at(b)) {
      res.at(a) = false;
      res.at(b) = false;
    } else if (H.at(a) > H.at(b)) {
      res.at(b) = false;
    } else {
      res.at(a) = false;
    }
    // for (int i = 0; i < N; i++) cout << res.at(i) << " ";
    // cout << endl;
  }

  int ans = 0;
  for (int i = 0; i < N; i++) {
    if (res.at(i)) ans++;
  }
  cout << ans << endl;
}