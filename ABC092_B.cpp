#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, D, X;
  cin >> N >> D >> X;
  vector<int> A(N);
  for (int i = 0; i < N; i++) cin >> A.at(i);

  int res = 0;
  for (int i = 0; i < N; i++) {
    int d, j = 1;
    ++res;
    while (1) {
      d = j * A.at(i) + 1;
      if (d > D) break;
      ++res;
      ++j;
    //   cout << i << " " << j << " " << d << endl;
    }
  }

  cout << res + X << endl;
}