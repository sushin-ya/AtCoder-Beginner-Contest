#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int64_t res = 0;
  for (int i = 0; i < N; ++i) {
    int64_t a, b;
    cin >> a >> b;
    res += (a + b) * (b - a + 1) / 2;
  }
  cout << res << endl;
}