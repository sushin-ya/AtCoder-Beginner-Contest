#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K, Q;
  cin >> N >> K >> Q;
  vector<int> p(N);
  for (int i = 0; i < N; i++) {
    p.at(i) = K - Q;
  }

  for (int i = 0; i < Q; i++) {
    int a;
    cin >> a;
    p.at(--a)++;
  }

  for (int i = 0; i < N; i++) {
    if (p.at(i) > 0) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
}