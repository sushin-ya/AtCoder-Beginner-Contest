#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  string S;
  cin >> N >> S;
  int x = 0, ans = 0;
  for (int i = 0; i < N; i++) {
    if (S.at(i) == 'I')
      ++x;
    else
      --x;
    ans = max(ans, x);
  }
  cout << ans << endl;
}