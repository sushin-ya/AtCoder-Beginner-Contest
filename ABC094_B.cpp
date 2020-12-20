#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M, X;
  cin >> N >> M >> X;
  vector<int> A(N + 1);

  for (int i = 0; i < M; i++) {
    int a;
    cin >> a;
    A.at(a) = 1;
  }

  int res1 = 0, res2 = 0;
  for (int i = 0; i < X; i++) res1 += A.at(i);
  for (int i = X; i < N; i++) res2 += A.at(i);
  cout << min(res1, res2) << endl;
}