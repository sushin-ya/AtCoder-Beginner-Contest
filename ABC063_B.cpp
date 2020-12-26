#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  set<char> s;
  for (int i = 0; i < S.size(); i++) s.insert(S.at(i));
  cout << (S.size() == s.size() ? "yes" : "no") << endl;
}