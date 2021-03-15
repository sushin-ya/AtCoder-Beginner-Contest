#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, ans;
  cin >> s;
  for (int i = 0, count = 1; i < s.length() - 1; i++) {
    if (i == s.length() - 2) {
      if (s.at(i) == s.at(i + 1)) {
        count++;
        ans += s.at(i) + to_string(count);
      } else {
        ans += s.at(i) + to_string(count);
        count = 1;
        ans += s.at(i + 1) + to_string(count);
      }
    } else {
      if (s.at(i) == s.at(i + 1)) {
        count++;
      } else {
        ans += s.at(i) + to_string(count);
        count = 1;
      }
    }
  }
  cout << ans << endl;
}