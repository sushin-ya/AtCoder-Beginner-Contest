#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  string S, T, ans = "";
  cin >> S >> T;
  for (int i; i < N; i++) {
    ans += S.at(i);
    ans += T.at(i);
  }
  cout << ans << endl;
}