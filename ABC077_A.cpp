#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<string> C(2);
  cin >> C.at(0);
  cin >> C.at(1);

  bool c1, c2, c3;
  c1 = C.at(0).at(0) == C.at(1).at(2);
  c2 = C.at(0).at(1) == C.at(1).at(1);
  c3 = C.at(0).at(2) == C.at(1).at(0);
  if (c1 && c2 && c3) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}