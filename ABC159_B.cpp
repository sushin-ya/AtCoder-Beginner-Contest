#include <bits/stdc++.h>
using namespace std;

int main() {
  string s1, s2, s3, r1, r2, r3;
  cin >> s1;

  r1 = s1;
  reverse(r1.begin(), r1.end());

  s2 = s1.substr(0, (s1.size() - 1) / 2);
  r2 = s2;
  reverse(r2.begin(), r2.end());

  s3 = s1.substr((s1.size() + 3) / 2 - 1, s1.size());
  r3 = s3;
  reverse(r3.begin(), r3.end());

  if (s1 == r1 && s2 == r2 && s3 == r3) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}