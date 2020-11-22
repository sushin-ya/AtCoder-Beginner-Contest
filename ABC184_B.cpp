#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, X;
  string S;
  cin >> N >> X >> S;
  for (int i = 0; i < N; i++) {
    if (S.at(i) == 'o') {
      X++;
    } else if (S.at(i) == 'x' && X > 0) {
      X--;
    }
  }

  cout << (X > 0 ? X : 0) << endl;
}