#include <bits/stdc++.h>
using namespace std;

int main() {
  int64_t N;
  cin >> N;
  string res = "";
  while (N) {
    --N;
    res += (char)('a' + (N % 26));
    N /= 26;
  }
  reverse(res.begin(), res.end());
  cout << res << endl;
}