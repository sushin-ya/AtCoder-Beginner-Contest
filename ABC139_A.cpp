#include <bits/stdc++.h>
using namespace std;

int main() {
  string S, T;
  cin >> S >> T;

  int cnt = 0;
  if (S.at(0) == T.at(0)) cnt++;
  if (S.at(1) == T.at(1)) cnt++;
  if (S.at(2) == T.at(2)) cnt++;

  cout << cnt << endl;
}