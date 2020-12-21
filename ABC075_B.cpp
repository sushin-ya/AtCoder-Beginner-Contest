#include <bits/stdc++.h>
using namespace std;
int H, W;
vector<string> S;

int checkAround(int h, int w) {
  int cnt = 0;
  for (int i = -1; i <= 1; i++) {
    for (int j = -1; j <= 1; j++) {
      if (h + i >= 0 && h + i < H && w + j >= 0 && w + j < W) {
        if (S.at(h + i).at(w + j) == '#') cnt++;
      }
    }
  }
  return cnt;
}

int main() {
  cin >> H >> W;
  S.resize(H);
  for (int h = 0; h < H; h++) cin >> S.at(h);

  for (int h = 0; h < H; h++) {
    for (int w = 0; w < W; w++) {
      if (S.at(h).at(w) == '.') {
        S.at(h).at(w) = to_string(checkAround(h, w)).at(0);
      }
      cout << S.at(h).at(w);
    }
    cout << endl;
  }
}