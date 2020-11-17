#include <bits/stdc++.h>
using namespace std;

// https://drken1215.hatenablog.com/entry/2019/06/22/224100

int64_t GCD(int64_t x, int64_t y) { return y ? GCD(y, x % y) : x; }
int64_t num(int64_t n, int64_t c, int64_t d) {
  int64_t G = GCD(c, d);
  int64_t L = c / G * d;
  return n - n / c - n / d + n / L;
}

int main() {
  int64_t A, B, C, D;
  cin >> A >> B >> C >> D;
  cout << num(B, C, D) - num(A - 1, C, D) << endl;
}