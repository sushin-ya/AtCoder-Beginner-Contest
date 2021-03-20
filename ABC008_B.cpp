#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  map<string, int> S;
  for (int i = 0; i < N; i++) {
    string s;
    cin >> s;
    S[s]++;
  }

  string ans;
  int cnt = 0;
  for (auto i = S.begin(); i != S.end(); ++i) {
    if (i->second > cnt) {
      cnt = i->second;
      ans = i->first;
    }
  }
  cout << ans << endl;
}