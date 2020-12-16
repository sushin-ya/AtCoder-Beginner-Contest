#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M, X, Y;
  cin >> N >> M >> X >> Y;

  vector<int> Z;
  for (int i = ++X; i < Y + 1; i++) {
    Z.push_back(i);
  }

  vector<int> x(N), y(M);
  for (int i = 0; i < N; i++) {
    cin >> x.at(i);
  }
  for (int i = 0; i < M; i++) {
    cin >> y.at(i);
  }

  int ans = 0;
  for (int i = 0; i < Z.size(); i++) {
    bool tf = true;
    for (int j = 0; j < N; j++) {
      if (x.at(j) >= Z.at(i)) {
        tf = false;
      }
    }
    for (int j = 0; j < M; j++) {
      if (y.at(j) < Z.at(i)) {
        tf = false;
      }
    }
    if (tf) ans++;
  }
  if (ans > 0) {
    cout << "No War" << endl;
  } else {
    cout << "War" << endl;
  }
}