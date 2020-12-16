#include <bits/stdc++.h>
using namespace std;

int main() {
  string S, T;
  cin >> S >> T;
  bool tf = false;
  for (int i = 0; i < S.size(); i++) {
    S = S.at(S.size() - 1) + S.substr(0, S.size() - 1);
    if (S == T) tf = true;
  }

  if (tf)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}