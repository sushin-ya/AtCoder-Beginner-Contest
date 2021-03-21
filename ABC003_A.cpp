#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, ans = 0;
  cin >> N;
  for (int i = 1; i < N + 1; i++) {
    ans += i * 10000;
  }
  cout << ans / N << endl;
}