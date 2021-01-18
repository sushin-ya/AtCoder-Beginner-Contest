#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, Q;
  cin >> N >> Q;
  vector<int> a(N);
  for (int i = 0; i < Q; i++) {
    int L, R, T;
    cin >> L >> R >> T;
    --L, --R;
    for (int j = L; j <= R; j++) a.at(j) = T;
  }
  for (int i = 0; i < N; i++) cout << a.at(i) << endl;
}