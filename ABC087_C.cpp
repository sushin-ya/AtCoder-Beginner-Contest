#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<vector<int>> A(2, vector<int>(N));
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < N; j++) {
      cin >> A.at(i).at(j);
    }
  }

  int maxim = 0;
  for (int i = 0; i < N; i++) {
    int res = 0;
    for (int j = 0; j < i + 1; j++) {
      res += A.at(0).at(j);
    }
    for (int j = i; j < N; j++) {
      res += A.at(1).at(j);
    }
    maxim = max(maxim, res);
  }
  cout << maxim << endl;
}