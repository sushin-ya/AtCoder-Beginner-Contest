#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  int mini = 100000;
  for (int a = 0; a < N + 1; a++) {
    int b = N - a, res = 1;
    for (int i = 0; i < a; i++) {
      res *= 2;
    }
    res += b * K;
    mini = min(mini, res);
  }
  cout << mini << endl;
}