#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K, M, A = 0, ans;
  cin >> N >> K >> M;
  for (int i = 0; i < N - 1; i++) {
    int a;
    cin >> a;
    A += a;
  }

  ans = N * M - A;
  if (ans > K)
    ans = -1;
  else if (ans < 0)
    ans = 0;
  cout << ans << endl;
}