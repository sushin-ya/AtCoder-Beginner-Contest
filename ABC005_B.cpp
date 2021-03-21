#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, ans = 101;
  cin >> N;
  for (int i = 0; i < N; i++) {
    int T;
    cin >> T;
    ans = min(ans, T);
  }
  cout << ans << endl;
}