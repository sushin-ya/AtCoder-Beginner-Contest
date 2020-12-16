#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, T;
  cin >> N >> T;
  bool tf = false;
  int res = 10000;
  for (int i = 0; i < N; i++) {
    int c, t;
    cin >> c >> t;
    if (t <= T && res > c) {
      res = c;
      tf = true;
    }
  }
  if (tf) {
    cout << res << endl;
  } else {
    cout << "TLE" << endl;
  }
}