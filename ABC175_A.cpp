#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  if (S.at(0) == 'R' && S.at(1) == 'R' && S.at(2) == 'R')
    cout << 3 << endl;
  else if (S.at(0) == 'R' && S.at(1) == 'R')
    cout << 2 << endl;
  else if (S.at(1) == 'R' && S.at(2) == 'R')
    cout << 2 << endl;
  else if (S.at(0) == 'R' || S.at(1) == 'R' || S.at(2) == 'R')
    cout << 1 << endl;
  else
    cout << 0 << endl;
}