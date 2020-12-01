#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> res(N);
  for (int i = 0; i < K; i++) {
    int d;
    cin >> d;
    for (int j = 0; j < d; j++) {
      int a;
      cin >> a;
      res.at(--a)++;
    }
  }

  int ans = 0;
  for (int i = 0; i < N; i++) {
    if (res.at(i) == 0) {
      ans++;
    }
  }

  cout << ans << endl;
}