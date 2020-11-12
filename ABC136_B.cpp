#include <bits/stdc++.h>
using namespace std;

bool digitOdd(int n) {
  int cnt = 0;
  while (n > 0) {
    n /= 10;
    cnt++;
  }

  if (cnt % 2 == 0)
    return false;
  else {
    return true;
  }
}

int main() {
  int N, ans = 0;
  cin >> N;

  for (int i = 1; i < N + 1; i++) {
    if (digitOdd(i)) {
      ans++;
    }
  }
  cout << ans << endl;
}