#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  vector<int> S(26);
  for (int i = 0; i < s.size(); i++) {
    S.at(s.at(i) - 97)++;
  }
  for (int i = 0; i < 26; i++) {
    if (S.at(i) % 2 != 0) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}