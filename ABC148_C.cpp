#include <bits/stdc++.h>
using namespace std;

int64_t GCD(int64_t x, int64_t y) { return y ? GCD(y, x % y) : x; }

int main() {
  int64_t A, B;
  cin >> A >> B;
  if (A < B) {
    swap(A, B);
  }
  int64_t G = GCD(A, B);
  cout << A * B / G << endl;
}