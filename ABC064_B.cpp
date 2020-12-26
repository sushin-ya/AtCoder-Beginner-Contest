#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, mini = 1001, maxim = -1;
  cin >> N;
  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    mini = min(mini, a);
    maxim = max(maxim, a);
  }
  cout << maxim - mini << endl;
}