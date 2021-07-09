#include <bits/stdc++.h>
using namespace std;

int main() {
  int H, W, X, Y;
  cin >> H >> W >> X >> Y;
  X--, Y--;
  vector<string> S(H);
  int ans = 1;
  for (int i = 0; i < H; i++) {
    cin >> S.at(i);
  }
  for (int i = X - 1; i >= 0; i--) {
    if (S.at(i).at(Y) == '.')
      ans++;
    else
      break;
  }
  for (int i = X + 1; i < H; i++) {
    if (S.at(i).at(Y) == '.')
      ans++;
    else
      break;
  }
  for (int i = Y - 1; i >= 0; i--) {
    if (S.at(X).at(i) == '.')
      ans++;
    else
      break;
  }
  for (int i = Y + 1; i < W; i++) {
    if (S.at(X).at(i) == '.')
      ans++;
    else
      break;
  }
  cout << ans << endl;
}