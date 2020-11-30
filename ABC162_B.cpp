#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int64_t sum = 0;
  for (int i = 1; i < N + 1; i++) {
    if (i % 3 == 0 || i % 5 == 0 || i % 15 == 0) {
      continue;
    } else {
      sum += i;
    }
  }
  cout << sum << endl;
}