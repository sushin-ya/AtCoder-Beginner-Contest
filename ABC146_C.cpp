// 教育的二分探索
// https://drken1215.hatenablog.com/entry/2020/01/05/154700
#include <bits/stdc++.h>
using namespace std;
const int64_t INF = 1000000001;

int64_t digit(int64_t N) {
  int64_t sum = 0;
  while (N > 0) {
    N /= 10;
    sum++;
  }
  return sum;
}

int main() {
  int64_t A, B, X;
  cin >> A >> B >> X;
  int64_t left = 0, right = INF;
  while (right - left > 1) {
    int64_t mid = (left + right) / 2;
    if (A * mid + B * digit(mid) > X)
      right = mid;
    else
      left = mid;
  }

  cout << left << endl;
}