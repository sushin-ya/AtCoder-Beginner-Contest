#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  for (int i = 0; i < s.length(); i++) {
    if (s.at(i) == 'a' || s.at(i) == 'i' || s.at(i) == 'u' || s.at(i) == 'e' ||
        s.at(i) == 'o') {
      continue;
    } else {
      cout << s.at(i);
    }
  }
  cout << endl;
}