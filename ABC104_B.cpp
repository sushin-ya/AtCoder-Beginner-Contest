#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int res = 0;
  bool tf = true;
  for (int i = 0; i < s.size(); i++) {
    if (i == 0 && s.at(i) != 'A') {
      tf = false;
    } else if ((i == 1 || i == s.size() - 1) && s.at(i) == 'C') {
      tf = false;
    } else {
      if (s.at(i) == 'C')
        res++;
      else if (i > 0 && !islower(s.at(i))) {
        tf = false;
      }
    }
  }

  if (tf && res == 1)
    cout << "AC" << endl;
  else
    cout << "WA" << endl;
}