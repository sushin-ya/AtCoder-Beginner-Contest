#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C, p, m;
  cin >> A >> B >> C;
  p = A + B;
  m = A - B;
  if (p == C && m == C) {
    cout << "?" << endl;
  } else if (p == C) {
    cout << "+" << endl;
  } else if (m == C) {
    cout << "-" << endl;
  } else {
    cout << "!" << endl;
  }
}