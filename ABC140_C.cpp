#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N), B(N - 1);
  for (int i = 0; i < N - 1; i++) cin >> B.at(i);

  A.at(0) = B.at(0);
  A.at(1) = B.at(0);
  for (int i = 1; i < N - 1; i++) {
    A.at(i + 1) = B.at(i);
    if (A.at(i) > A.at(i + 1)) {
      A.at(i) = A.at(i + 1);
    }
  }

  int res = 0;
  for (int i = 0; i < N; i++) res += A.at(i);
  cout << res << endl;
}