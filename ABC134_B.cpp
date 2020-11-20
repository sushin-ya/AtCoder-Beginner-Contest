#include <bits/stdc++.h>
using namespace std;

// https://refining-process.hatenablog.com/entry/2019/07/21/005322
// 難しく考えすぎたが、2D+1が何個あれば、Nを満たせるかなので、N/Dの切り上げでよい

int main() {
  int N, D;
  cin >> N >> D;
  int ans = N;

  for (int tmp = 0; tmp < (1 << N); tmp++) {
    bitset<20> s(tmp);
    int cnt = 0;
    vector<int> p(N);
    for (int i = 0; i < N; i++) {
      if (s.test(i)) {
        if (N / 2 < D) {
          for (int j = 0; j < N; j++) {
            p.at(j) = 1;
          }
        } else if (i - D < 0) {
          for (int j = 0; j < i + D + 1; j++) {
            p.at(j) = 1;
          }
        } else if (i + D + 1 > N) {
          for (int j = i - D; j < N; j++) {
            p.at(j) = 1;
          }
        } else {
          for (int j = i - D; j < i + D + 1; j++) {
            p.at(j) = 1;
          }
        }
        cnt++;
      }
    }

    int sum = 0;
    for (int i = 0; i < N; i++) sum += p.at(i);

    if (sum == N) {
      ans = min(ans, cnt);
    }
  }
  cout << ans << endl;
}