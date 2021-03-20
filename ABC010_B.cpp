#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, ans = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    while (1) {
      if (a == 1 || a == 3 || a == 7 || a == 9) {
        break;
      } else {
        --a;
        ++ans;
      }
    }
  }
  cout << ans << endl;
}