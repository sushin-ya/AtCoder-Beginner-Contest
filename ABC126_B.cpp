#include <bits/stdc++.h>
using namespace std;

int main() {
  string S, f, b, ans = "";
  cin >> S;
  f = S.substr(0, 2);
  b = S.substr(2, 2);

  if (stoi(f) >= 0 && stoi(b) > 0 && stoi(b) <= 12) {
    ans = "YYMM";
  }

  if (stoi(f) > 0 && stoi(f) <= 12 && stoi(b) >= 0) {
    if (ans == "YYMM") {
      ans = "AMBIGUOUS";
    } else {
      ans = "MMYY";
    }
  }

  if (ans == "") {
    ans = "NA";
  }
  cout << ans << endl;
}