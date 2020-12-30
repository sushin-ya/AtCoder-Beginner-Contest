#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> s(3);
  cin >> s.at(0) >> s.at(1) >> s.at(2);
  sort(s.begin(), s.end());
  if (s.at(0) == 5 && s.at(1) == 5 && s.at(2) == 7)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}