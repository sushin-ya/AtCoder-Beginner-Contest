#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, ans = 0;
  cin >> A;
  for (int i = 1; i < A / 2 + 1; i++) {
    ans = max(0, i * (A - i));
  }
  cout << ans << endl;
}