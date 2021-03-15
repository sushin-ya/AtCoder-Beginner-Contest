#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, a, b;
  int K;
  cin >> N >> a >> b;
  cin >> K;

  vector<int> P(K);
  for (int i = 0; i < K; i++) cin >> P.at(i);
  sort(P.begin(), P.end());

  string ans = "YES";
  for (int i = 1; i < K; i++) {
    if (P.at(i - 1) == P.at(i)) ans = "NO";
  }

  for (int i = 0; i < K; i++) {
    if (P.at(i) == a || P.at(i) == b) ans = "NO";
  }

  cout << ans << endl;
}