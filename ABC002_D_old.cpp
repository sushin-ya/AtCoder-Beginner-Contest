// bit全探索
// 無向グラフの扱いがわからないので、一旦保留
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> x(M), y(M);
  for (int i = 0; i < M; i++) {
    cin >> x.at(i) >> y.at(i);
    x.at(i)--;
    y.at(i)--;
  }

  int ans = 1;
  for (int tmp = 0; tmp < (1 << N); tmp++) {
    bitset<12> s(tmp);
    bool tf;

    cout << s << endl;
    for (int j = 0; j < M; j++) {
      if (s.test(x.at(j)) && s.test(y.at(j))) { // この条件だと、一部を満たしたものも出力されからだめ
        tf = true;
        cout << x.at(j) << " " << y.at(j) << endl;
      } else {
        tf = false;
        break;
      }
    }

    if (tf) ans = max(ans, (int)s.count());
  }
  cout << ans << endl;
}