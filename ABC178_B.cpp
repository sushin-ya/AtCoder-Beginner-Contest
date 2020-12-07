#include <bits/stdc++.h>
using namespace std;

int main() {
  int64_t a, b, c, d;
  cin >> a >> b >> c >> d;

  int64_t ac = a * c, ad = a * d, bc = b * c, bd = b * d,
      ans = max({ac, ad, bc, bd});

  cout << ans << endl;
}