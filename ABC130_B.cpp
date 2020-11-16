#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, X;
  cin >> N >> X;
  vector<int> L(N);

  for (int i = 0; i < N; i++) {
    cin >> L.at(i);
  }

  int cnt = 1, D = 0;
  for (int i = 0; i < N; i++) {
    D = D + L.at(i);

    if (D <= X) {
      cnt++;
    } else {
      break;
    }
  }
  cout << cnt << endl;
}