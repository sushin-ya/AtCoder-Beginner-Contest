#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A, B, ans = 0;
  cin >> N >> A >> B;
  for (int i = 0; i < N; i++) {
    string s;
    int d;
    cin >> s >> d;
    d = max(A, d);
    d = min(d, B);
    if (s == "East") {
      ans += d;
    } else if (s == "West") {
      ans -= d;
    }
  }

  if (ans == 0) {
    cout << 0 << endl;
  } else if (ans > 0) {
    cout << "East"
         << " " << ans << endl;
  } else {
    cout << "West"
         << " " << abs(ans) << endl;
  }
}