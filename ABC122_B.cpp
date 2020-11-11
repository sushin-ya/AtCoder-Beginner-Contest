#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  int cnt = 0, ans = 0;
  for (int i = 0; i < S.length(); i++) {
    if (S.at(i) == 'A' || S.at(i) == 'C' || S.at(i) == 'G' || S.at(i) == 'T') {
      cnt++;
      ans = max(ans, cnt);
    } else {
      cnt = 0;
    }
  }

  cout << ans << endl;
}