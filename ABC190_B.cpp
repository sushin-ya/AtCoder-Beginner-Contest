#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, S, D;
  cin >> N >> S >> D;
  for (int i = 0; i < N; i++) {
    int X, Y;
    cin >> X >> Y;
    if (X < S && Y > D) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
}