#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> H(N);
  for (int i = 0; i < N; i++) cin >> H.at(i);
  sort(H.begin(), H.end());

  int64_t res = 0;
  for (int i = 0; i < N - K; i++) res += H.at(i);
  cout << res << endl;
}