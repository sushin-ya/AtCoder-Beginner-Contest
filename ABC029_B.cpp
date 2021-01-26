#include <bits/stdc++.h>
using namespace std;

int main() {
  int ans = 0;
  for (int i = 0; i < 12; i++) {
    string S;
    cin >> S;
    if (S.find("r") != string::npos) ++ans;
  }
    cout << ans << endl;
}