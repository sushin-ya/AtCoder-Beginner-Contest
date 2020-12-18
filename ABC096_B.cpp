#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> n(3);
  int K;
  cin >> n.at(0) >> n.at(1) >> n.at(2) >> K;
  sort(n.begin(), n.end(), greater<int>{});

  for (int i = 0; i < K; ++i) {
    n.at(0) *= 2;
  }

  int res = 0;
  for (int i = 0; i < 3; ++i) res += n.at(i);

  cout << res << endl;
}