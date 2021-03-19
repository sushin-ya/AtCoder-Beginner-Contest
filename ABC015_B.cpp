#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, ans = 0, num = 0;
  cin >> N;
  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    if (a != 0) {
      ans += a;
      ++num;
    }
  }
  cout << (ans % num == 0 ? ans / num : ans / num + 1) << endl;
}