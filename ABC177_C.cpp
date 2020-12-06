#include <bits/stdc++.h>
using namespace std;

// 全探索で間に合わないので累積和する
// https://drken1215.hatenablog.com/entry/2020/10/09/172500

const int MOD = 1000000007;
int main() {
  int N;
  cin >> N;
  vector<int64_t> A(N);
  for (int i = 0; i < N; i++) cin >> A.at(i);

  int64_t res = 0, sum = A[0];
  for (int i = 1; i < N; i++) {
    res += sum * A[i], res %= MOD;
    sum += A[i], sum %= MOD;
  }
  cout << res << endl;
}