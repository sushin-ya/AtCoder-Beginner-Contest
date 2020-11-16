// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   int64_t W, H, x, y;
//   cin >> W >> H >> x >> y;

//   double vmin, smin, v_left, v_right, s_up, s_down;
//   v_left = (double)x * H;
//   v_right = (double)(W - x) * H;
//   s_up = (double)(H - y) * W;
//   s_down = (double)y * W;

//   vmin = min(v_left, v_right);
//   smin = min(s_up, s_down);

//   if (vmin > smin) {
//     cout << fixed << setprecision(10) << vmin << " " << 0 << endl;
//   } else if (vmin < smin) {
//     cout << fixed << setprecision(10) << smin << " " << 0 << endl;
//   } else {
//     cout << fixed << setprecision(10) << vmin << " " << 1 << endl;
//   }
// }

//https://drken1215.hatenablog.com/entry/2019/06/17/003300
// 面積の大きくない方の面積の最大値は常に、長方形の面積の半分になる
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    long long W, H, x, y;
    cin >> W >> H >> x >> y;
    double res = (double)(W) * H / 2;
    cout << fixed << setprecision(10) << res << " ";

    if (x*2 == W && y * 2 == H) cout << 1 << endl;
    else cout << 0 << endl;
}