#include <bits/stdc++.h>
using namespace std;

int main() {
  // naze dameka wakaran
  //   vector<pair<int, int>> N(3);
  //   cin >> N.at(0).first >> N.at(1).first >> N.at(2).first;
  //   for (int i = 0; i < 3; i++) N.at(i).second = i + 1;
  //   sort(N.begin(), N.end(), greater<>());
  //   for (int i = 0; i < 3; i++) cout << N.at(i).second << endl;

  vector<int> N(3);
  for (int i = 0; i < 3; i++) cin >> N.at(i);
  for (int i = 0; i < 3; i++) {
    int ans = 0;
    for (int j = 0; j < 3; j++) {
      if (N.at(i) < N.at(j)) ans++;
    }
    cout << ans + 1 << endl;
  }
}