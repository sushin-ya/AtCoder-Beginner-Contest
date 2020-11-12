#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, ans = 0;
  cin >> N;

  for (int i = 1; i < N + 1; i += 2) {
    int cnt = 0;
    for (int j = 1; j < i + 1; j++) {
      if (i % j == 0) {
        cnt++;
      }
    }

    if (cnt == 8) {
      ans++;
    }
  }

  cout << ans << endl;
}