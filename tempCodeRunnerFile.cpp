#include <bits/stdc++.h>
using namespace std;

int main() {
  string N;
  cin >> N;
  vector<string> vec((int)N.length());
  for (int i = 0; i < (int)N.length(); i++) {
    vec.at(i) = N.at(i);
  }

  int ans = -1;

  for (int tmp = 0; tmp < (1 << 18); tmp++) {
    bitset<18> s(tmp);

    string str = "";
    for (int i = 0; i < (int)N.length(); i++) {
      if (s.test(i)) {
        str += vec.at(i);
      }
    }

    if (str != "" && stoll(str) % 3 == 0) {
      if (ans == -1) {
        ans = (int)N.length() - (int)str.length();
      } else{
        ans = min(ans,(int)N.length() - (int)str.length());
      }
    }
  }
  cout << ans << endl;
}