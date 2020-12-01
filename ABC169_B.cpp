#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<uint64_t> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
    if (A.at(i) == 0) {
      cout << 0 << endl;
      return 0;
    }
  }

  uint64_t ans = 1, INF = 1000000000000000000;
  for (int i = 0; i < N; i++) {
    if (ans > INF / A.at(i)) {
      cout << -1 << endl;
      return 0;
    } else {
      ans *= A.at(i);
    }
  }
  cout << ans << endl;
}