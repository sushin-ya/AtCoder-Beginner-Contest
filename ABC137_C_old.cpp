// TLEでだめ
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<string> s(N);
  for (int i = 0; i < N; i++) {
    cin >> s.at(i);
    sort(s.at(i).begin(), s.at(i).end());
  }

  int64_t ans = 0;
  for (int i = 0; i < N; i++) {
    for (int j = i + 1; j < N; j++) {
      if (s.at(i) == s.at(j)) {
        ans++;
      }
    }
  }
  cout << ans << endl;
}