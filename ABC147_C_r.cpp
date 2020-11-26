#include <bits/stdc++.h>
using namespace std;

int N;
vector<int> A;
vector<vector<pair<int, int>>> xy;

bool checktf(bitset<15> s) {
  for (int i = 0; i < N; i++) {
    if (s.test(i)) {
      for (int j = 0; j < xy.at(i).size(); j++) {
        if (s.test(xy.at(i).at(j).first) != xy.at(i).at(j).second) {
          return false;
        }
      }
    }
  }
  return true;
}

int main() {
  // 入力
  cin >> N;
  xy.resize(N);
  for (int i = 0; i < N; i++) {
    int A;
    cin >> A;
    xy.at(i).resize(A);
    for (int j = 0; j < A; j++) {
      int m, n;
      cin >> xy.at(i).at(j).first >> xy.at(i).at(j).second;
      --xy.at(i).at(j).first;
    }
  }

  // bit全探索
  int ans = 0;
  for (int tmp = 0; tmp < (1 << N); tmp++) {
    bitset<15> s(tmp);

    if (checktf(s)) {
      ans = max(ans, (int)s.count());
    }
  }
  cout << ans << endl;
}