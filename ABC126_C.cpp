#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> vec(N);

  for (int i = 0; i < N; i++) {
    int cnt = 0, val = i + 1;
    while (val < K) {
      val *= 2;
      cnt++;
    }
    vec.at(i) = cnt;
  }

  double ans = 0;
  for (int i = 0; i < N; i++) {
    ans += (1.0 / N) * pow((1.0 / 2), vec.at(i));

    // cout << (1.0 / N) * pow((1.0 / 2), vec.at(i)) << endl;
  }

  cout << fixed << setprecision(12) << ans << endl;
}