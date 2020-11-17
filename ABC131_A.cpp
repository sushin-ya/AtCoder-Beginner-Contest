#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  bool tf = false;
  for (int i = 0; i < S.size() - 1; i++) {
    if (S.at(i) == S.at(i + 1)) {
      tf = true;
    }
  }

  if (tf) {
    cout << "Bad" << endl;
  } else {
    cout << "Good" << endl;
  }
}