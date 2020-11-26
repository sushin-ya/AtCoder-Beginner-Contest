#include <bits/stdc++.h>
using namespace std;

// 約数を列挙して、和が最小の組み合わせを考える
// https://qiita.com/drken/items/a14e9af0ca2d857dad23#3-%E7%B4%84%E6%95%B0%E5%88%97%E6%8C%99

int64_t mini_divisors(int64_t N) {
  int64_t res = 1 + N, x, y, sum;
  for (int64_t i = 1; i * i <= N; i++) {
    if (N % i == 0) {
      x = i;
      y = N / x;
      sum = x + y;
      res = min(res, sum);

    //   cout << x << " " << y << " " << sum << endl;
    }
  }
  return res;
}

int main() {
  int64_t N;
  cin >> N;
  int64_t ans = mini_divisors(N);
  cout << ans - 2 << endl;
}