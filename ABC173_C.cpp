#include <bits/stdc++.h>
using namespace std;

// bit全探索
// https://yamakasa.net/atcoder-abc-173-c/

int main() {
  int H, W, K;
  cin >> H >> W >> K;
  vector<string> c(H);
  for (int h = 0; h < H; h++) {
    cin >> c.at(h);
  }
  int ans = 0;
  for (int i = 0; i < (1 << H); i++) {
    for (int j = 0; j < (1 << W); j++) {
      int cnt = 0;
      //   cout << i << " " << j << endl;
      for (int h = 0; h < H; h++) {
        if ((i & (1 << h)) != 0) continue;
        for (int w = 0; w < W; w++) {
          if ((j & (1 << w)) != 0) continue;
          if (c.at(h).at(w) == '#') cnt++;
        }
      }
      if (cnt == K) ans++;
    }
  }
  cout << ans << endl;
}