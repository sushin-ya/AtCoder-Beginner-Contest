#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, sum = 0;
  cin >> N;
  vector<string> S(N);
  vector<int> P(N);
  for (int i = 0; i < N; i++) {
    cin >> S.at(i) >> P.at(i);
    sum += P.at(i);
  }

  string ans = "";
  for (int i = 0; i < N; i++) {
    if (P.at(i) > sum / 2) ans = S.at(i);
  }

  if (ans == "")
    cout << "atcoder" << endl;
  else
    cout << ans << endl;
}