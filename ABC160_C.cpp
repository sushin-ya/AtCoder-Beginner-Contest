#include <bits/stdc++.h>
using namespace std;

int main() {
  int K, N;
  cin >> K >> N;
  vector<int> A(N * 2);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
    A.at(i + N) = A.at(i) + K;
  }

  int64_t sum = 0, ans = 1000000000000;
  for (int i = 0; i < N; i++) {
    sum = A.at(N + i - 1) - A.at(i);
    ans = min(ans, sum);
  }
  cout << ans << endl;
}