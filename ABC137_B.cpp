#include <bits/stdc++.h>
using namespace std;

int main() {
  int K, X;
  cin >> K >> X;
  vector<int> x(2000001);
  for (int i = 0; i < 2000001; i++) {
    x.at(i) = i - 1000000;
  }

  int minp, maxp;
  minp = X + 1000000 - (K - 1);
  maxp = X + 1000000 + (K - 1);

  for (int i = minp; i < maxp + 1; i++) {
    cout << x.at(i) << " ";
  }
  cout << endl;
}