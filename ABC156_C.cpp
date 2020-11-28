#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> X(N);
  for (int i = 0; i < N; i++) cin >> X.at(i);

  int res, ans;
  for (int i = 0; i < 100; i++) {
    res = 0;

    for (int j = 0; j < N; j++) {
      int P = i;
      ++P;
      res += (X.at(j) - P) * (X.at(j) - P);
    //   cout << "i: " << i << " " << P << " " << X.at(j) << endl;
    }

    // cout << res << endl;

    if (i == 0)
      ans = res;
    else
      ans = min(ans, res);
  }

  cout << ans << endl;
}