#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x, ans;
  cin >> n >> x;
  ans = min(x - 1, n - x);
  cout << ans << endl;
}