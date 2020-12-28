#include <bits/stdc++.h>
using namespace std;

int main() {
  string O, E;
  cin >> O >> E;
  if (O.size() - E.size() == 0) {
    for (int i = 0; i < O.size(); i++) {
      cout << O.at(i);
      cout << E.at(i);
    }
  } else {
    for (int i = 0; i < O.size(); i++) {
      cout << O.at(i);
      if (i == O.size() - 1) break;
      cout << E.at(i);
    }
  }
  cout << endl;
}