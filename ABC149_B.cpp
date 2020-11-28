#include <bits/stdc++.h>
using namespace std;

// https://www.hamayanhamayan.com/entry/2020/01/01/024113
// かしこい。。。

int main() {
  int64_t A, B, K;
  cin >> A >> B >> K;

  if (A + B > K) {
    if (A >= K) {
      A -= K;
      cout << A << " " << B << endl;
    } else {
      K -= A;
      A = 0;
      if (B >= K) {
        B -= K;
        cout << A << " " << B << endl;
      } else {
        B = 0;
        cout << A << " " << B << endl;
      }
    }
  } else {
    cout << 0 << " " << 0 << endl;
  }
}