#include <bits/stdc++.h>
using namespace std;

string reversible(string s, int l, int r) {
  string fr, md, bk;
  fr = s.substr(0, l);
  md = s.substr(l, r - l + 1);
  bk = s.substr(r + 1, s.length() + r - 1);
  reverse(md.begin(), md.end());
  return fr + md + bk;
}

int main() {
  string S;
  int N;
  cin >> S >> N;
  for (int i = 0; i < N; i++) {
    int l, r;
    cin >> l >> r;
    --l, --r;
    S = reversible(S, l, r);
  }
  cout << S << endl;
}