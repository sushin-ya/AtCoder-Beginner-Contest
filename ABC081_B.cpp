#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) cin >> A.at(i);
  int res = 0;
  bool tf = true;
  while (1) {
    for (int i = 0; i < N; i++) {
      if (A.at(i) % 2 != 0) {
        tf = false;
        break;
      } else {
        A.at(i) /= 2;
      }
    }
    if (tf) {
      ++res;
    } else {
      break;
    }
  }
  cout << res << endl;
}