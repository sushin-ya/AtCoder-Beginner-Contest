#include <bits/stdc++.h>
using namespace std;

int GCD(int x, int y) { return y ? GCD(y, x % y) : x; }

int main() {
  int K;
  cin >> K;

  int res = 0;
  for (int i = 1; i < K + 1; i++) {
    for (int j = 1; j < K + 1; j++) {
      for (int k = 1; k < K + 1; k++) {
        res += GCD(GCD(i, j), k);
        // cout << i << " " << j << " " << k << endl;
      }
    }
  }
  cout << res << endl;
}