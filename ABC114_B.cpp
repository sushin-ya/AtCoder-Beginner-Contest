#include <bits/stdc++.h>
using namespace std;

int main() {
  string str;
  cin >> str;
  int res = 1000;
  for (int i = 0; i < str.size() - 3 + 1; i++) {
    string s = str.substr(i, 3);
    res = min(res, abs(753 - stoi(s)));
  }
  cout << res << endl;
}