#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int64_t> A(N + 1), B(N);
  for (int i = 0; i < N + 1; i++) cin >> A.at(i);
  for (int i = 0; i < N; i++) cin >> B.at(i);

  int64_t ans = 0;
  for (int i = 0; i < N; i++) {
    if (A.at(i) >= B.at(i)) {
      ans += B.at(i);
    //   cout << "if:" << ans << endl;
    } else {
      if (A.at(i + 1) > B.at(i) - A.at(i)) {
        ans += B.at(i);
        // cout << "elseif:" << ans << endl;
        A.at(i + 1) -= B.at(i) - A.at(i);
      } else {
        ans += A.at(i + 1) + A.at(i);
        // cout << "elseelse:" << ans << endl;
        A.at(i + 1) = 0;
      }
    }
  }
  cout << ans << endl;
}