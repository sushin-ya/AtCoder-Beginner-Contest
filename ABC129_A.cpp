#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> t(3);
  cin >> t.at(0) >> t.at(1) >> t.at(2);
  sort(t.begin(), t.end());
  cout << t.at(0) + t.at(1) << endl;
}