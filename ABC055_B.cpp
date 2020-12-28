#include <bits/stdc++.h>
using namespace std;

int main() {
  int64_t N, INF = 1000000007;
  cin >> N;
  int64_t ans = 1;
  for (int i = 1; i < N + 1; i++) {
    ans = i * ans % INF;
  }
  cout << ans << endl;
}