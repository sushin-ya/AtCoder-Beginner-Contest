#include <bits/stdc++.h>
using namespace std;

int main() {
  string s1, s2, s3;
  cin >> s1 >> s2 >> s3;
  string ans;
  ans = s1.substr(0,1) + s2.substr(0,1) + s3.substr(0,1);
  transform(ans.begin(), ans.end(), ans.begin(), ::toupper);
  cout << ans << endl;
}