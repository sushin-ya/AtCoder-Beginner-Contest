#include <bits/stdc++.h>
using namespace std;

int main() {
  int64_t L, R;
  cin >> L >> R;

  if (R - L > 3000) {
    cout << 0 << endl;
  } else {
    int64_t res = 2018;
    for (int64_t i = L; i < R; i++) {
      for (int64_t j = i + 1; j <= R; j++) {
        res = min(res, (i * j) % 2019);
      }
    }
    cout << res << endl;
  }
}