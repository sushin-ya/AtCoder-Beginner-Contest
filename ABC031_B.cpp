#include <bits/stdc++.h>
using namespace std;

int main() {
  int L, H, N;
  cin >> L >> H >> N;
  for (int i = 0; i < N; i++) {
    int A;
    cin >> A;
    if (A >= L && A <= H) {
      cout << 0 << endl;
    } else if (A < L) {
      cout << L - A << endl;
    } else {
      cout << -1 << endl;
    }
  }
}