#include <bits/stdc++.h>
using namespace std;

int both_contain(string x, string y) {
  int cnt = 0;
  for (char i = 'a'; i <= 'z'; ++i) {
    if (x.find(i) != string::npos && y.find(i) != string::npos) cnt++;
  }
  return cnt;
}

int main() {
  int N;
  string S;
  cin >> N >> S;

  int ans = 0;
  for (int i = 1; i < N - 1; i++) {
    string X, Y;
    X = S.substr(0, i);
    Y = S.substr(i, S.size() - i);
    ans = max(ans, both_contain(X, Y));
  }
  cout << ans << endl;
}