#include <bits/stdc++.h>
using namespace std;

// 固定して考えるとAの倍数を数える問題になる
// https://drken1215.hatenablog.com/entry/2020/09/21/070100

int main() {
  int N;
  cin >> N;
  int64_t res = 0;
  for (int a = 1; a < N; ++a) res += (N - 1) / a;
  cout << res << endl;
}