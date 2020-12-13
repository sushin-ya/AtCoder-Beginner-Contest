#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> l(3);
  cin >> l.at(0) >> l.at(1) >> l.at(2);
  sort(l.begin(), l.end());
  cout << (l.at(0) * l.at(1)) / 2 << endl;
}