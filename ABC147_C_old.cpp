// 通らない
#include <bits/stdc++.h>
using namespace std;

//https://drken1215.hatenablog.com/entry/2019/12/14/171657

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  vector<vector<int> > x(N);
  vector<vector<int> > y(N);

  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
    for (int j = 0; j < A.at(i); j++) {
      int a, b;
      cin >> a >> b;
      x.at(i).push_back(a);
      y.at(i).push_back(b);
    }
  }

  int ans = 0;
  // ビット全探索
  for (int tmp = 0; tmp < (1 << N); tmp++) {
    bool tf = true;
    bitset<15> s(tmp);

    for (int i = 0; i < N; i++) {
      if (s.test(i)) {  //正直者か確認
        for (int j = 0; j < A.at(i); j++) {
          if (!s.test(x.at(i).at(j)) == y.at(i).at(j)) {  //正直者の内容を検証
            tf = false;
            break;
          }
        }
      }
      if (!tf) {
        break;
      }
    }

    if (tf) {  //正直者の証言が正しかったら値を更新
      ans = max(ans, tmp);
      tf = false;
    }
  }
  cout << ans << endl;
}