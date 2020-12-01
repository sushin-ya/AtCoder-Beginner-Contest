#include <bits/stdc++.h>
using namespace std;

// https://drken1215.hatenablog.com/entry/2020/05/20/083600
//角度の求め方がわからんかった

int main() {
  double A, B, H, M;
  cin >> A >> B >> H >> M;
  double a, b;
  a = (H * 60 + M) / 720 * (M_PI * 2);
  b = M / 60 * (M_PI * 2);

  double ans;
  ans = sqrt(A * A + B * B - 2.0 * A * B * cos(a - b));
  cout << fixed << setprecision(10) << ans << endl;
}