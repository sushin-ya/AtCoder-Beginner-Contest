#include <bits/stdc++.h>
using namespace std;

int main() {
  int s;
  cin >> s;
  vector<int> a;

  int res = 0;
  a.push_back(s);
  bool tf = false;
  while (1) {
    res = a.back();
    if (res % 2 == 0)
      res /= 2;
    else
      res = 3 * res + 1;
    a.push_back(res);

    for (int i = 0; i < a.size(); i++) {
      for (int j = i + 1; j < a.size(); j++) {
        // cout << res << " " << a.size() << endl;
        if (a.at(i) == a.at(j)) {
          cout << ++j << endl;
          return 0;
        }
      }
    }
  }
}