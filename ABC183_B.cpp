#include <bits/stdc++.h>
using namespace std;

// 数学の問題で解いたことあるやつだ。。。

int main() {
  double sx, sy, gx, gy;
  cin >> sx >> sy >> gx >> gy;
  cout << fixed << setprecision(10) << (sx * gy + gx * sy) / (sy + gy)
       << endl;
}