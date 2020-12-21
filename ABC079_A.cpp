#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  sort(s.begin(), s.end());
  if (s.at(0) == s.at(1) && s.at(1) == s.at(2))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}