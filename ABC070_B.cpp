#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  int ans = min(b, d) - max(a, c);
  cout << (ans < 0 ? 0 : ans) << endl;
}