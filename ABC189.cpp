#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, X, sum = 0;
  cin >> N >> X;
  for (int i = 1; i < N + 1; i++) {
    int V, P;
    cin >> V >> P;
    sum += V * P;
    if (sum > X * 100) {
      cout << i << endl;
      return 0;
    };
  }

  cout << "-1" << endl;
}