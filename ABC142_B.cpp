#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K, cnt = 0;
  cin >> N >> K;
  for (int i = 0; i < N; i++) {
    int h;
    cin >> h;
    if (h >= K) {
      cnt++;
    }
  }
  cout << cnt << endl;
}