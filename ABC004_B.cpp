#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<vector<string>> c(4, vector<string>(4));
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      cin >> c.at(i).at(j);
    }
  }

  for (int i = 3; i > -1; i--) {
    for (int j = 3; j > -1; j--) {
      cout << c.at(i).at(j) << (j == 0 ? "" : " ");
    }
    cout << endl;
  }
}