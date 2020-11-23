#include <bits/stdc++.h>
using namespace std;

// https://o-treetree.hatenablog.com/entry/2020/05/21/025541
// sortして小さい順に足していけばいいらしい

int main() {
  int N;
  cin >> N;
  vector<double> v(N);
  for (int i = 0; i < N; i++) cin >> v.at(i);

  sort(v.begin(), v.end());

  for (int i = 1; i < N; i++) {
    v.at(i) = (v.at(i - 1) + v.at(i)) / 2;
  }

  cout << fixed << setprecision(6) << v.at(N - 1) << endl;
}