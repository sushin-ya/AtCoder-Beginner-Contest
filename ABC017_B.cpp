#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  for (int i = S.length() - 1; i > -1; i--) {
    if (S.at(i) == 'o' || S.at(i) == 'k' || S.at(i) == 'u') {
      continue;
    } else if (S.at(i) == 'c') {
      if (i != S.length() - 1 && S.at(i + 1) == 'h') {
        continue;
      } else {
        cout << "NO" << endl;
        return 0;
      }
    } else if (S.at(i) == 'h') {
      if (i != 0 && S.at(i - 1) == 'c') {
        continue;
      } else {
        cout << "NO" << endl;
        return 0;
      }
    } else {
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;
}