#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) cin >> A.at(i);

  int64_t res = 0;
  for (int i = 1; i < N; i++) {
    if (A.at(i - 1) > A.at(i)) {
      int d = A.at(i - 1) - A.at(i);
      A.at(i) += d;
      res += d;
    }
  }
  cout << res << endl;
}