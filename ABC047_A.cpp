#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> c(3);
  cin >> c.at(0) >> c.at(1) >> c.at(2);
  sort(c.begin(), c.end());
  if (c.at(0) + c.at(1) == c.at(2))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}