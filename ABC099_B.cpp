#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  int d = b - a, res = 0;
  for (int i = 0; i < d + 1; i++) {
    res += i;
  }

  cout << res - b << endl;
}