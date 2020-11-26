#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  string S;
  cin >> N >> S;
  bool tf = true;
  if (N % 2 == 0) {
    for (int i = 0; i < N / 2; i++) {
      if (S.at(i) != S.at(i + N / 2)) {
        tf = false;
        break;
      }
    }

    cout << (tf ? "Yes" : "No") << endl;

  } else {
    cout << "No" << endl;
  }
}