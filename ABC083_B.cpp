#include <bits/stdc++.h>
using namespace std;

int digitSum(int x) {
  int sum = 0;
  while (x > 0) {
    sum += x % 10;
    x /= 10;
  }
  return sum;
}

int main() {
  int N, A, B;
  cin >> N >> A >> B;

  int res = 0;
  for (int i = 1; i < N + 1; i++) {
    int d = digitSum(i);
    if (d >= A && d <= B) {
      res += i;
    }
  }
  cout << res << endl;
}