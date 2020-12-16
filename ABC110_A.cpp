#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> X(3);
  cin >> X.at(0) >> X.at(1) >> X.at(2);
  sort(X.begin(), X.end(), greater<int>());
  cout << X.at(0) * 10 + X.at(1) + X.at(2) << endl;
}