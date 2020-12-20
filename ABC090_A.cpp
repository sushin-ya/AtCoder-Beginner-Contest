#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<string> c(3);
  for (int i = 0; i < 3; i++) cin >> c.at(i);
  cout << c.at(0).at(0) << c.at(1).at(1) << c.at(2).at(2) << endl;
}