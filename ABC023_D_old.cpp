#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

// https://algo-logic.info/abc023d/

ll N;
vector<ll> H, S;
bool f(ll mid) {  // 割られた時の風船の高度は全て mid 以下か判定
  vector<int> count(N);
  REP(i, N) {
    if (H[i] > mid) {
      return false;
    } else {
      count[min(N - 1, (mid - H[i]) /
                           S[i])]++;  // iを計算して、バケットc[i]に1を立てる
    }
  }
  REP(j, N - 1) { count[j + 1] += count[j]; }
  REP(j, N) {
    if (count[j] > j + 1) return false;
  }
  return true;
}

int main() {
  cin >> N;
  H.resize(N);
  S.resize(N);
  REP(i, N) cin >> H.at(i) >> S.at(i);
  // 二分探索
  ll l = -1, r = 1e18;
  while (r - l > 1) {
    ll mid = (r + l) / 2;
    if (f(mid)) {
      r = mid;
    } else {
      l = mid;
    }
  }
  cout << r << endl;
  return 0;
}