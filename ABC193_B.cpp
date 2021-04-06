#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, ans = 1000000001;
  cin >> N;
  for (int i = 0; i < N; i++) {
    int A, P, X;
    cin >> A >> P >> X;
    if (A < X) {
      ans = min(ans, P);
    }
  }
  cout << (ans != 1000000001 ? ans : -1) << endl;
}