#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  bool tf = true;
  for (int i = 0; i < S.size(); i++) {
    if ((i % 2 == 0 && S.at(i) == 'L') || (i % 2 != 0 && S.at(i) == 'R')) {
      tf = false;
      break;
    }
  }

  cout << (tf ? "Yes" : "No") << endl;
}