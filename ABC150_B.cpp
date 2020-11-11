#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<char> S(N);
  for (int i = 0; i < N; i++) {
    cin >> S.at(i);
  }

  int cnt = 0, tf = 0;
  for (int i = 0; i < N; i++) {
    if (S.at(i) == 'A') {
      tf = 1;
    } else if (S.at(i) == 'B') {
      if (tf == 1) {
        tf = 2;
      } else {
        tf = 0;
      }
    } else if (S.at(i) == 'C') {
      if (tf == 2) {
        tf = 3;
      } else {
        tf = 0;
      }
    }

    if (tf == 3) {
      cnt++;
      tf = 0;
    }
  }
  cout << cnt << endl;
}