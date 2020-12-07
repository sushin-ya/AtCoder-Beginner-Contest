#include <bits/stdc++.h>
using namespace std;

vector<int64_t> enum_divisors(int64_t N) {
    vector<int64_t> res;
    for (int64_t i = 1; i * i <= N; ++i) {
        if (N % i == 0) {
            res.push_back(i);
            // 重複しないならば i の相方である N/i も push
            if (N/i != i) res.push_back(N/i);
        }
    }
    // 小さい順に並び替える
    sort(res.begin(), res.end());
    return res;
}

int main() {
  int64_t N;
  cin >> N;
  const auto &res = enum_divisors(N);
  for (int i = 0; i < res.size(); ++i) cout << res[i] << endl;
}