// ありえるパターンをすべて試す
#include <bits/stdc++.h>
using namespace std;

int N, M;
vector<int> s, c;

bool ok(string str) {
  if (str.size() != N) return false;
  for (int i = 0; i < M; ++i) {
    if (str.at(s.at(i)) != (char)(c.at(i) + '0')) return false;
  }
  return true;
}

string solve() {
  for (int i = 0; i <= 999; ++i) {
    string str = to_string(i);
    if (ok(str)) return str;
  }
  return "-1";
}

int main() {
  cin >> N >> M;
  s.resize(M);
  c.resize(M);
  for (int i = 0; i < M; i++) {
    cin >> s.at(i) >> c.at(i);
    s.at(i)--;
  }

  cout << solve() << endl;
}