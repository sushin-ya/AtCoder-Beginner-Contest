#include <bits/stdc++.h>
using namespace std;

// https://scrapbox.io/esaka-sandbox/ABC137_C_-_Green_Bin
// b11だけ通らないので、上でアクセプト

int main() {
  int N;
  cin >> N;
  map<string, int> mp;
  for (int i = 0; i < N; i++) {
    string str;
    cin >> str;
    sort(str.begin(), str.end());
    mp[str]++;
  }

  int64_t ans = 0;
  for (auto i = mp.begin(); i != mp.end(); ++i) {
    int64_t sum = ((i->second - 1) * i->second) / 2;
    ans += sum;
  }
  cout << ans << endl;
}