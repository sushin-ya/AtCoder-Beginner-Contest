#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
  // 四方向への移動ベクトル
  const int dx[4] = {1, 0, -1, 0};
  const int dy[4] = {0, 1, 0, -1};

  // 入力
  int R, C, sx, sy, gx, gy;
  cin >> R >> C;
  cin >> sy >> sx;
  cin >> gy >> gx;
  sx--, sy--, gx--, gy--;
  vector<string> field(R);
  for (int i = 0; i < R; i++) {
    cin >> field.at(i);
  }

  // 頂点sをスタートした探索
  vector<vector<int>> dist(R, vector<int>(C, -1));
  queue<pair<int, int>> que;
  dist.at(sx).at(sy) = 0;
  que.push({sx, sy});
  while (!que.empty()) {
    pair<int, int> v = que.front();
    que.pop();

    // 四方向を探索
    for (int dir = 0; dir < 4; ++dir) {
      int x = v.first, y = v.second;
      int nx = x + dx[dir];
      int ny = y + dy[dir];

      // 場外アウトしたり、移動先が壁の場合はスルー
      if (nx < 0 || nx >= R || ny < 0 || ny >= C) continue;
      if (field.at(nx).at(ny) == '#') continue;

      if (dist.at(nx).at(ny) == -1) {
        dist.at(nx).at(ny) = dist.at(x).at(y) + 1;
        que.push({nx, ny});
      }
    }
  }

  // 結果
  cout << dist.at(gy).at(gx) << endl;

  // debug
  //   for (int i = 0; i < R; i++) {
  //     for (int j = 0; j < C; j++) {
  //       cout << (dist.at(i).at(j) != -1 ? dist.at(i).at(j) : 0) << " ";
  //     }
  //     cout << endl;
  //   }

  //   cout << endl;
  //   for (int i = 0; i < R; i++) {
  //     for (int j = 0; j < C; j++) {
  //       cout << i << " " << j << " " << dist.at(i).at(j) << endl;
  //     }
  //   }
}