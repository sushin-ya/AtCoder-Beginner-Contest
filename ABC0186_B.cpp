#include <bits/stdc++.h>
using namespace std;

int main() {
  int H, W, mini = 101, ans = 0;
  cin >> H >> W;
  vector<vector<int>> A(H, vector<int>(W));
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      cin >> A.at(i).at(j);
      mini = min(mini, A.at(i).at(j));
    }
  }

  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      ans += A.at(i).at(j) - mini;
    }
  }
  cout << ans << endl;
}