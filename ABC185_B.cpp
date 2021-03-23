#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M, T, last = 0, n, ans = 0;
  cin >> N >> M >> T;
  n = N;
  for (int i = 0; i < M; i++) {
    int a, b;
    cin >> a >> b;
    n = n - (a - last) > 0 ? n - (a - last) : 0;
    if (n == 0) ++ans;
    n = n + (b - a) < N ? n + (b - a) : N;
    last = b;
  }
  n = n - (T - last) > 0 ? n - (T - last) : 0;
  if (n == 0) ++ans;

  cout << (!ans ? "Yes" : "No") << endl;
}