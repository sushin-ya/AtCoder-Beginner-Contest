#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  cout << (S.at(0) == S.at(1) && S.at(1) == S.at(2) ? "Won" : "Lost") << endl;
}