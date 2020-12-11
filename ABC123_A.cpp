#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> p(5);
  int k;
  for (int i = 0; i < 5; i++) cin >> p.at(i);
  cin >> k;

  string ans = "Yay!";
  for (int i = 0; i < 4; i++) {
    for (int j = i + 1; j < 5; j++) {
      if (p.at(j) - p.at(i) > k) {
        ans = ":(";
      }
    }
  }

  cout << ans << endl;
}