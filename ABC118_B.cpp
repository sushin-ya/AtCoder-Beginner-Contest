#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> l(M);
  for (int i = 0; i < N; i++) {
    int k;
    cin >> k;
    for (int j = 0; j < k; j++) {
      int a;
      cin >> a;
      l.at(--a)++;a
    }
  }

  int ans = 0;
  for (int i = 0; i < M; i++) {
    if (l.at(i) == N) {
      ans++;
    }
  }
  cout << ans << endl;
}